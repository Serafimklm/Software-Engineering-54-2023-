#include<stdio.h>
#include<string.h>
int main (){
    char nome [90];
    int tamanho;
    
    printf("digite o seu nome completo\n");
    gets(nome);
    tamanho = strlen(nome);
    
    printf("o comprimento do nome � %d\n", tamanho);
    return (0);
}