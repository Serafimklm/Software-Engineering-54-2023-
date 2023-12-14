#include<stdio.h> // Inclus�o da biblioteca padr�o de entrada e sa�da

struct produto {
    int codigo;
    char descricao[50];
    float preco;
    int saldo;
};

int main() 
{
    struct produto ficha; // Declara?�o de uma estrutura do tipo produto chamada ficha

    printf("digite o codigo do produto\n"); // Solicita ao usu�rio que digite o c�digo do produto
    scanf("%d", &ficha.codigo); // L? o c�digo digitado pelo usu�rio e armazena em ficha.codigo

    printf("digite a descricao do produto\n"); // Solicita ao usu�rio que digite a descri?�o do produto
    scanf("%s", ficha.descricao); // L? a descri?�o digitada pelo usu�rio e armazena em ficha.descricao

    printf("digite o preco do produto:"); // Solicita ao usu�rio que digite o pre?o do produto
    scanf("%f", &ficha.preco); // L? o pre?o digitado pelo usu�rio e armazena em ficha.preco

    printf("digite o saldo do produto:"); // Solicita ao usu�rio que digite o saldo do produto
    scanf("%d", &ficha.saldo); // L? o saldo digitado pelo usu�rio e armazena em ficha.saldo

    printf("codigo: %d\n", ficha.codigo); // Imprime o c�digo do produto
    printf("descricao: %s\n", ficha.descricao); // Imprime a descri?�o do produto
    printf("preco:  R$%.2f\n", ficha.preco);  // Imprime o pre?o do produto formatado com R$ e duas casas decimais
    printf("saldo: %d\n", ficha.saldo); // Imprime o saldo do produto

    return(0); // Retorna 0 para indicar a conclus�o bem-sucedida do programa
}