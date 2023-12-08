#include<stdio.h>

int main (){
    int idade;
    printf("iforme a idade:\n");
    scanf ("%d", &idade);
    if    (idade < 16)
    {
        printf ("nao eleitor \n");
    }
    else
    {
        if ((idade < 18) || (idade > 65))
        { 
            printf("seu voto e facultativo\n");
        }
        else
        {
            printf("eleitor obrigatorio\n");
        
        }
    }
 return (0);
}