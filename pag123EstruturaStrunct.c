#include<stdio.h> // Inclusão da biblioteca padrão de entrada e saída

struct produto {
    int codigo;
    char descricao[50];
    float preco;
    int saldo;
};

int main() 
{
    struct produto ficha; // Declara?ão de uma estrutura do tipo produto chamada ficha

    printf("digite o codigo do produto\n"); // Solicita ao usuário que digite o código do produto
    scanf("%d", &ficha.codigo); // L? o código digitado pelo usuário e armazena em ficha.codigo

    printf("digite a descricao do produto\n"); // Solicita ao usuário que digite a descri?ão do produto
    scanf("%s", ficha.descricao); // L? a descri?ão digitada pelo usuário e armazena em ficha.descricao

    printf("digite o preco do produto:"); // Solicita ao usuário que digite o pre?o do produto
    scanf("%f", &ficha.preco); // L? o pre?o digitado pelo usuário e armazena em ficha.preco

    printf("digite o saldo do produto:"); // Solicita ao usuário que digite o saldo do produto
    scanf("%d", &ficha.saldo); // L? o saldo digitado pelo usuário e armazena em ficha.saldo

    printf("codigo: %d\n", ficha.codigo); // Imprime o código do produto
    printf("descricao: %s\n", ficha.descricao); // Imprime a descri?ão do produto
    printf("preco:  R$%.2f\n", ficha.preco);  // Imprime o pre?o do produto formatado com R$ e duas casas decimais
    printf("saldo: %d\n", ficha.saldo); // Imprime o saldo do produto

    return(0); // Retorna 0 para indicar a conclusão bem-sucedida do programa
}