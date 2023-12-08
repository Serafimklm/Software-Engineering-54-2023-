#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    int quadrado, num;
    float raiz;

    printf("\n digite um n?mero inteiro");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        raiz = sqrt (num);
        printf("\n o numero ? par");
        printf("\n a raiz quadrada ? %.3f", raiz);
    }
    else
    {
        quadrado = num * num;
        printf("\n o numero ? impar");
        printf("o n?mero ao quadrado ? igual a %d", quadrado);
    }   
return (0);
}