#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 20
#define TAN 5
#define TAT 12

struct listaAT 
{
    int lista[10];
    int cpf;
    char nome;
    int achalista, op;
};

int main (){
    setlocale(LC_ALL, "Portuguese");

    //declara?ao de variaveiss
    struct listaAT;
    struct nome;
    int op, i, cpf;


    //inicialza?ão da opcão
    op = 0;

    // loop principal do programa
 while (op != 4)
   {
     //exibi?ão do menu inicial para o usuário
        printf("___________________________________________\n");
        printf("1 - solicitar atendimento\n");
        printf("2 - listar atendimento por setor\n");
        printf("3 - listar atendimentos registrados\n");
        printf("4 - sair\n");
        printf("DIGITE A OPCAO DESEJADA:\n");
        printf("___________________________________________\n");
        
        
        // leitura da opcao selecionada
        if (op == 1)
        {
            system ("cls");
            // Loop para cadastrar usuarios
             for (i = 0; i < TAN; i++)
             printf("___________________________________________\n");
            printf("digite seu CPF");
            scanf("%d", &cpf[i].cpf);
            fflush(stdin);
            
        }
   }
 }