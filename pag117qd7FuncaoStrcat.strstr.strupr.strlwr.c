#include<stdio.h>
#include<string.h>
int main (){
    char nome [90], sombrenome[80];
    printf("digite o nome\n");
    gets (nome);
    printf("digite o sobrenome\n");
    gets(sombrenome);

    strcat(nome,sombrenome); //Concatena o sobrenome ao final do nome
    printf("apos concatenatr as string temos que o nome e: %s\n", nome); //mprime o nome resultante da concatena?ão
    if (strstr(sombrenome, nome) == 0) // / Verifica se o sobrenome está contido no nome e imprime uma mensagem se estiver
    {
        printf("agora o sobrenome esta contido na variavel nome\n");
    }
    strlwr(nome); // Converte o nome para letras minúsculas
    printf("o nome em minusculo e %s\n", nome);// Imprime o nome em letras minúsculas
    strupr (nome); // Converte o nome para letras maiúscula
    printf("\no nome em maiusculo e %s\n", nome); // Imprime o nome em letras maiusculas
 return (0);
}