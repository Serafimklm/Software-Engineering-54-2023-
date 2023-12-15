#include<stdio.h>  // Inclui a biblioteca padr�o de entrada e sa�da em C.

#define TAM 10  // Define uma constante chamada TAM com valor 10.

struct funcionario  // Define uma estrutura chamada "funcionario" que armazena informa?�es sobre um funcion�rio.
{
    int matricula;
    char nome[50];
    char setor[30];
    float salario;
};

int main () {  // Fun?�o principal do programa.

    struct funcionario ficha[TAM];  // Declara um array de estruturas "funcionario" chamado "ficha" com tamanho TAM.
    int busca, i, acha;  // Declara vari�veis inteiras para armazenar a matr�cula a ser buscada, um �ndice de loop e uma vari�vel de controle.

    char op;  // Declara uma vari�vel de caractere para armazenar a op?�o do usu�rio.

    // Loop para preencher os dados dos funcion�rios no array de estruturas.
    for (i = 0; i < TAM; i++)
    {
        printf("Digite a matricula do funcionario:\n");
        scanf("%d", &ficha[i].matricula);
        fflush(stdin);
        printf("Digite o nome:\n");
        scanf("%50[^\n]s", &ficha[i].nome);
        fflush(stdin);
        printf("Digite o setor:\n");
        scanf("%30[^\n]s", &ficha[i].setor);
        fflush(stdin);
        printf("Digite o salario:");
        scanf("%f", &ficha[i].salario);
        fflush(stdin);
    }

    // Loop principal que permite ao usu�rio realizar buscas.
    do
    {
        printf("Deseja realizar busca (S/n):\n");
        scanf("%c", &op);
        fflush(stdin);
    } while ((op != 'S') && (op != 's') && (op != 'n') && (op != 'N'));

    // Loop de busca que continua enquanto o usu�rio deseja realizar buscas.
    while ((op == 'S') || (op == 's'))
    {
        printf("Informe a matricula que deseja buscar:");
        scanf("%d", &busca);
        fflush(stdin);
        i = 0;
        acha = 0;

        // Loop de busca na array de estruturas.
        while ((i < TAM) && (acha == 0))
        {
            if (ficha[i].matricula == busca)
                acha = 1;
            else
                i++;
        }

        // Verifica se a matr�cula foi encontrada e exibe as informa?�es do funcion�rio.
        if (acha == 1)
        {
            printf("O setor e: %s\n", ficha[i].setor);
            printf("O salario e: %.2f\n", ficha[i].salario);
        }
        else
        {
            printf("Matricula nao cadastrada\n");
        }

        // Loop para verificar se o usu�rio deseja realizar outra busca.
        do
        {
            printf("Deseja realizar busca (S/N):\n");
            scanf("%c", &op);
            fflush(stdin);
        } while ((op != 'S') && (op != 's') && (op != 'n') && (op != 'N'));
    }

    return 0;  // Retorna 0 para indicar que o programa foi conclu�do com sucesso.
}