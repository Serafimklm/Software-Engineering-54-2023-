#include<stdio.h>
#include<string.h>
int main (){
    char palavra[30];
    int tam, i;
    printf("digite o nome\n");
    fgets(palavra, sizeof(palavra), stdin);
    tam = strlen(palavra);
    for (i=0; i<tam; i++)
    {
        printf("%s\n", palavra);
    }
 return(0);
}