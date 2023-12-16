#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


#define TAM 20

struct atendimento
{
    char nome[50];
    char cpf[15];
    int tipoAtendimento;
    int senha;
};

void solicitarAtendimento(struct atendimento atendimentos[], int *contadorAtendimentos) {
    printf("Digite seu nome: \n");
    scanf(" %49[^\n]", atendimentos[*contadorAtendimentos].nome);
    getchar(); // Limpa o buffer do teclado

    printf("Digite seu CPF: ");
    scanf("%14s", atendimentos[*contadorAtendimentos].cpf);
    getchar(); // Limpa o buffer do teclado

    printf("Escolha o tipo de atendimento:\n");
    printf("1 - Abertura de Conta\n");
    printf("2 - Caixa\n");
    printf("3 - Gerente Pessoa Física\n");
    printf("4 - Gerente Pessoa Jurídica\n");
    scanf("%d", &atendimentos[*contadorAtendimentos].tipoAtendimento);

    // GERADOR DE SENHAS
    atendimentos[*contadorAtendimentos].senha = rand() % 100 + 1;

    (*contadorAtendimentos)++;
}

void listarAtendimentosRegistrados(struct atendimento atendimentos[], int contadorAtendimentos) {
    printf("\nListagem de Atendimentos Registrados:\n");
    for (int i = 0; i < contadorAtendimentos; i++) {
        printf("___________________________________________\n");
        printf("Nome: %s\n", atendimentos[i].nome);
        printf("CPF: %s\n", atendimentos[i].cpf);
        printf("Tipo Atendimento: %d\n", atendimentos[i].tipoAtendimento);
        printf("Senha: %d\n", atendimentos[i].senha);
        printf("___________________________________________\n");
    }
}

void listarAtendimentoPorSetor(struct atendimento atendimentos[], int contadorAtendimentos, int tipoAtendimento) {
    printf("\nListagem de Atendimentos para o Setor %d:\n", tipoAtendimento);
    for (int i = 0; i < contadorAtendimentos; i++) {
        if (atendimentos[i].tipoAtendimento == tipoAtendimento) {
            printf("___________________________________________\n");
            printf("Nome: %s\n", atendimentos[i].nome);
            printf("CPF: %s\n", atendimentos[i].cpf);
            printf("Tipo Atendimento: %d\n", atendimentos[i].tipoAtendimento);
            printf("Senha: %d\n", atendimentos[i].senha);
            printf("___________________________________________\n");
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    struct atendimento atendimentos[TAM];
    int contadorAtendimentos = 0;
    int opcao;

    do {
        printf("___________________________________________\n");
        printf("\nBem-vindo ao sistema de atendimento\n");
        printf("1 - Solicitar Atendimento\n");
        printf("2 - Listar Atendimentos Registrados\n");
        printf("3 - Listar Atendimento por Setor\n");
        printf("4 - Sair\n");
        printf("Digite a op?ão desejada:\n ");
        scanf("%d", &opcao);
        printf("___________________________________________\n");

        switch (opcao) {
            case 1:
                solicitarAtendimento(atendimentos, &contadorAtendimentos);
                printf("Sua senha é: %d, aguarde na fila\n", atendimentos[contadorAtendimentos - 1].senha);
                break;
            case 2:
                listarAtendimentosRegistrados(atendimentos, contadorAtendimentos);
                break;
            case 3:
                printf("Digite o tipo de atendimento para listar: ");
                int tipoAtendimento;
                scanf("%d", &tipoAtendimento);
                listarAtendimentoPorSetor(atendimentos, contadorAtendimentos, tipoAtendimento);
                break;
            case 4:
                printf("Atendimento finalizado.\n");
                break;
            default:
                printf("Op?ão inválida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
