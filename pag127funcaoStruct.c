#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#define TAM 20

struct livro
{
    int codigo;
    char titulo[50];
    char autor [34];
    char area [40];
    int ano;
    char editora [30];
};
int main ()
{
    setlocale(LC_ALL, "Portuguese");

    struct livro ficha [TAM];
    struct livro troca;
    int busca, i, j, acha, op;

    op = 0;
    while (op !=5)
    {
        printf("1 - cadastrar os livros\n");
        printf("2 - imprimir os livros cadastrados\n");
        printf("3 - pesquisar os livros por ano\n");
        printf("5 - sair\n");
        printf("DIGITE A OPCAO DESEJADA:\n");
        scanf("%d", &op);
        fflush(stdin);
        if (op==1)
        {
            system ("cls");
            for (i=0; i < TAM; i++)
            {
                printf("digite o código do livro da posi?ão %d:", i+1);
                scanf("%d", &ficha[i].codigo);
                fflush(stdin);
                printf("digite o titulo do livro\n");
                scanf("%50[^\n]s", &ficha[i].titulo);
                fflush(stdin);
                printf("digite o nome do autor:\n");
                scanf("%30[^\n]s", &ficha[i].autor);
                fflush(stdin);
                printf("digite a area do livro:");
                scanf("30%[^\n]s", &ficha[i].area);
                fflush(stdin);
                printf ("digite o ano: ");
                scanf ("%d", &ficha[i].ano);
                fflush(stdin);
                printf("digite o nome da editora\n");
                scanf("%30[^\n]s", &ficha[i].editora);
                fflush(stdin);
            }
        }
        else
        {
            if (op == 2)
            {
                system("cls");
                for (i=0; i <TAM; i++)
                {
                    printf("\nCÓDIGO: %d\n", ficha[i].codigo);
                    printf("\nTITULO: %s\n", ficha[i].titulo);
                    printf("\nAUTOR: %s\n", ficha[i].autor);
                    printf("\nAREA: %s\n", ficha[i].area);
                    printf("\nANO: %d\n", ficha[i].ano);
                    printf("\nEDTITORA: %s\n", ficha[i].editora);
                }
            }    
            else
            {
                if (op == 3)
                {
                    system("cls");
                    printf("digite o codigo que deseja buscar:\n");
                    scanf("%d", &busca);
                    i = 0;
                    acha = 0;
                    while ((i < TAM) && (acha == 0))
                    {
                        if (ficha[i].codigo==busca)
                            acha = 1;
                            else
                            i++;
                        }
                        if (acha == 1)
                        {
                            printf("\nCÓDIGO: %d\n", ficha[i].codigo);
                            printf("\nTITULO: %s\n", ficha[i].titulo);
                            printf("\nAUTOR: %s\n", ficha[i].autor);
                            printf("\nAREA: %s\n", ficha[i].area);
                            printf("\nANO: %d\n", ficha[i].ano);
                            printf("\nEDTITORA: %s\n", ficha[i].editora);
                        }
                        else
                            printf("\n registro nao encontrado");
                    }
                    else
                    {
                        if(op == 4)
                        {
                            system("cls");
                            for (i=0; i < TAM - 1; i++)
                            {
                                for (j=i+1;j<TAM; j++)
                                {
                                     if(ficha[i].ano> ficha[j].ano)
                                    {
                                            troca = ficha [i];
                                            ficha[i] = ficha [j];
                                            ficha[j] = troca;
                                    }
                                }
                            }
                            for (i=0; i <TAM; i++)
                            {
                                  printf("\n CODIGO: %d, TITULO: %s ANO: %d\n\n",
                                  ficha[i].codigo,
                                  ficha[i].titulo,
                                  ficha[i].ano);
                        }
                    }
                }
            }
        }
    }
}