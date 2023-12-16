#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 20

struct Atendimento
{
    char nome[44];
    char cpf[12];
    int tipoAtendimento;
    int senha;
};

struct Atendimento solicitarAtendimento(struct Atendimento atendimentos[], int *contadorAtendimentos) {
    struct Atendimento novoAtendimento;
   do {
        printf("Digite seu nome completo: \n");
        scanf(" %44[^\n]", novoAtendimento.nome);
        getchar(); // Limpa teclado
        if (strlen(novoAtendimento.nome) < 14){  // do/ if/ definição que se o nome coter menos de 14 caracters, o nome é imcompleto
            printf("O nome digitado é incompelto. Por favor, ");
        }
    }while (strlen(novoAtendimento.nome)<14);
   do {
        printf("Digite seu CPF (apenas números, 11 dígitos):\n ");
        scanf("%11s", novoAtendimento.cpf);
        getchar(); // Limpa teclado

        if (strlen(novoAtendimento.cpf) != 11) {    // se o CPF conter menos ou mais de 11 caracters o cpf é incompleto.
            printf("CPF inválido, tente novamente.\n");
        }
    } while (strlen(novoAtendimento.cpf) != 11);
    
    

    do {
        printf("Escolha o tipo de atendimento:\n");
        printf("1 - Abertura de Conta\n");
        printf("2 - Caixa\n");
        printf("3 - Gerente Pessoa Física\n");
        printf("4 - Gerente Pessoa Jurídica\n");
        scanf("%d", &novoAtendimento.tipoAtendimento);

        if (novoAtendimento.tipoAtendimento < 1 || novoAtendimento.tipoAtendimento > 4) {
            printf("Opção inválida. Tente novamente.\n");
        }

    } while (novoAtendimento.tipoAtendimento < 1 || novoAtendimento.tipoAtendimento > 4);

    // GERADOR DE SENHAS
    novoAtendimento.senha = rand() % 100 + 1;

    atendimentos[*contadorAtendimentos] = novoAtendimento;
    (*contadorAtendimentos)++;

    return novoAtendimento;
}

void listarAtendimentosRegistrados(struct Atendimento atendimentos[], int contadorAtendimentos) {
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

void listarAtendimentoPorSetor(struct Atendimento atendimentos[], int contadorAtendimentos, int tipoAtendimento) {
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
   
    struct Atendimento atendimentos[TAM];
    int contadorAtendimentos = 0;
    int opcao;

    do {
        printf("___________________________________________\n");
        printf("\nBem-vindo ao sistema de atendimento\n");
        printf("1 - Solicitar Atendimento\n");
        printf("2 - Listar Atendimentos Registrados\n");
        printf("3 - Listar Atendimento por Setor\n");
        printf("4 - Sair\n");
        printf("Digite a opção desejada:\n ");
        scanf("%d", &opcao);
        printf("___________________________________________\n");

        switch (opcao) {
            case 1:
                solicitarAtendimento(atendimentos, &contadorAtendimentos);
                printf("Sua senha de atendimento é: %d, aguarde na fila\n", atendimentos[contadorAtendimentos - 1].senha);
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
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);
 return 0;
}
