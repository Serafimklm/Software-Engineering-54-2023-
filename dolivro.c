#include <stdio.h>
int main (){
    /*declaracao de variaveis*/
    int idade, ano;
    float altura;
    char nome[30];
    /*entrada de dados*/
    /*mensagem ao usuario*/
    printf("digite o seu nome\n");
    fgets(nome, sizeof(nome), stdin); //leitura do nome, visto que o scanf imprimiria somente um nome
    //mensagem ao usuario
    printf ("digite a idade:\n");
    scanf ("%d", &idade);
    //mensagem ao usuario
    printf ("digite a altura:\n");
    scanf ("%f", &altura); //leitura da altura
    //processamento
    //cauculo do ano de nascimento
    ano = 2023 - idade;
    //saida de dados
    printf ("\nO nome e: %s", nome);
    printf ("\nA altura e: %.2f", altura);
    printf ("\na idade e: %d", idade);
    printf ("\nO ano  de nascimento e: %d", ano);
    return 0;
}