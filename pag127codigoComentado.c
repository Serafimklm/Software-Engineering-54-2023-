#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#define TAM 20  // sempre que o programa encontrar TAM no código, ele será substituído pelo valor 20 durante a fase de pré-processamento.

// Defini?ão da estrutura livro para armazenar informa?ões sobre um livro
struct livro
{
    int codigo;
    char titulo[50];
    char autor[34];
    char area[40];
    int ano;
    char editora[30];
};

int main ()
{
    // Configura?ão do local para Portugu?s
    setlocale(LC_ALL, "Portuguese");

    // Declara?ão de variáveis
    struct livro ficha[TAM];
    struct livro troca;
    int busca, i, j, acha, op;

    // Inicializa?ão da op?ão
    op = 0;

    // Loop principal do programa
    while (op != 5)
    {
        // Exibi?ão do menu
        printf("1 - cadastrar os livros\n");
        printf("2 - imprimir os livros cadastrados\n");
        printf("3 - pesquisar os livros por ano\n");
        printf("5 - sair\n");
        printf("DIGITE A OPCAO DESEJADA:\n");

        // Leitura da op?ão
        scanf("%d", &op);
        fflush(stdin);

        // Verifica?ão da op?ão escolhida
        if (op == 1)
        {
            // Limpa a tela
            system("cls");

            // Loop para cadastrar livros
            for (i = 0; i < TAM; i++)
            {
                // Solicita informa?ões sobre o livro
                printf("digite o código do livro da posi?ão %d:", i + 1);
                scanf("%d", &ficha[i].codigo);
                fflush(stdin);
                printf("digite o título do livro\n");
                scanf("%50[^\n]s", &ficha[i].titulo);
                fflush(stdin);
                printf("digite o nome do autor:\n");
                scanf("%30[^\n]s", &ficha[i].autor);
                fflush(stdin);
                printf("digite a área do livro:");
                scanf("%40[^\n]s", &ficha[i].area);
                fflush(stdin);
                printf("digite o ano: ");
                scanf("%d", &ficha[i].ano);
                fflush(stdin);
                printf("digite o nome da editora\n");
                scanf("%30[^\n]s", &ficha[i].editora);
                fflush(stdin);
            }
        }
        else if (op == 2)
        {
            // Limpa a tela
            system("cls");

            // Loop para imprimir livros cadastrados
            for (i = 0; i < TAM; i++)
            {
                printf("\nCÓDIGO: %d\n", ficha[i].codigo);
                printf("TÍTULO: %s\n", ficha[i].titulo);
                printf("AUTOR: %s\n", ficha[i].autor);
                printf("ÁREA: %s\n", ficha[i].area);
                printf("ANO: %d\n", ficha[i].ano);
                printf("EDITORA: %s\n", ficha[i].editora);
            }
        }
        else if (op == 3)
        {
            // Limpa a tela
            system("cls");

            // Pesquisa por ano
            printf("digite o código que deseja buscar:\n");
            scanf("%d", &busca);
            i = 0;
            acha = 0;

            // Loop de busca
            while ((i < TAM) && (acha == 0))
            {
                if (ficha[i].codigo == busca)
                    acha = 1;
                else
                    i++;
            }

            // Exibe o resultado da busca
            if (acha == 1)
            {
                printf("\nCÓDIGO: %d\n", ficha[i].codigo);
                printf("TÍTULO: %s\n", ficha[i].titulo);
                printf("AUTOR: %s\n", ficha[i].autor);
                printf("ÁREA: %s\n", ficha[i].area);
                printf("ANO: %d\n", ficha[i].ano);
                printf("EDITORA: %s\n", ficha[i].editora);
            }
            else
            {
                printf("\nregistro não encontrado");
            }
        }
        else
        {
            // Se a op?ão não for 1, 2 ou 3, encerra o programa
            if (op == 4)
            {
                // Limpa a tela
                system("cls");

                // Ordena os livros por ano usando o algoritmo de ordena?ão bolha (bubble sort)
                for (i = 0; i < TAM - 1; i++)
                {
                    for (j = i + 1; j < TAM; j++)
                    {
                        if (ficha[i].ano > ficha[j].ano)
                        {
                            // Troca as posi?ões dos livros
                            troca = ficha[i];
                            ficha[i] = ficha[j];
                            ficha[j] = troca;
                        }
                    }
                }

                // Imprime a lista de livros ordenada por ano
                for (i = 0; i < TAM; i++)
                {
                    printf("\nCODIGO: %d, TITULO: %s ANO: %d\n\n",
                           ficha[i].codigo,
                           ficha[i].titulo,
                           ficha[i].ano);
                }
            }
        }
    }
}
