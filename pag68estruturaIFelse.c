#include<stdio.h>

int main (){
    char nome [40];
    int idade;

    printf("informe o nome: \n");
    scanf("%s", &nome);
    printf("informe a idade: \n");
    scanf("%d", &idade);

    printf("nome %s \n", &nome);
    printf("idade %d \n", &idade);
    if (idade <= 18){
        printf("o valor do plano pano fica: R$50,00 \n");
    }
    else
    {
        if ((idade >= 19) && (idade <=29))
        { 
        printf("o valor do plano fica: 70$ \n");
        }
        else
        {
            if ((idade >= 30) && (idade <= 45))
            {
            printf("o valor do pano fica 90$ \n");
            }
            else
            {
                if ((idade >= 46) && (idade <= 65))
                {
                    printf("o valor do plano e: 130,00\n");
                }
                else
                {
                    printf("o valor do pano sera de 170,00$ \n");
                }
                
                
            }
        }   
    }
return (0);
}