#include<stdio.h> // Inclus�o da biblioteca padr�o de entrada e sa�da

struct produto {
    int codigo;
    char descricao[50];
    float preco;
    int saldo;
};

int main () {
    struct produto ficha[10]; // Declara?�o de um array de 10 estruturas do tipo produto

    int i; // Declara?�o da vari�vel de controle de loop

    for (i = 0; i < 10; i++) {
        printf("digite o codigo do produto\n"); // Solicita ao usu�rio que digite o c�digo do produto
        scanf("%d", &ficha[i].codigo); // L? o c�digo digitado pelo usu�rio e armazena em ficha[i].codigo

        printf("digite a descricao do produto\n"); // Solicita ao usu�rio que digite a descri?�o do produto
        scanf("%s", ficha[i].descricao); // L? a descri?�o digitada pelo usu�rio e armazena em ficha[i].descricao

        printf("digite o preco do produto\n"); // Solicita ao usu�rio que digite o pre?o do produto
        scanf("%f", &ficha[i].preco); // L? o pre?o digitado pelo usu�rio e armazena em ficha[i].preco

        printf("digite o saldo do produto:\n"); // Solicita ao usu�rio que digite o saldo do produto
        scanf("%d", &ficha[i].saldo); // L? o saldo digitado pelo usu�rio e armazena em ficha[i].saldo
    }

    for (i = 0; i < 10; i++) {
        printf("\nPRODUTO %d\n", i+1); // Imprime o n�mero do produto
        printf("Codigo: %d\n", ficha[i].codigo); // Imprime o c�digo do produto
        printf("Descricao: %s\n", ficha[i].descricao); // Imprime a descri?�o do produto
        printf("preco: R$%.2f\n", ficha[i].preco); // Imprime o pre?o do produto formatado com R$ e duas casas decimais
        printf("saldo: %d\n", ficha[i].saldo); // Imprime o saldo do produto
    }

    return (0); // Retorna 0 para indicar a conclus�o bem-sucedida do programa
}