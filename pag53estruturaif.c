#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "portuguese");
    int num;
    float raiz;

    printf ("\ndigite um numero inteiro");
    scanf("%d", &num);
    if (num % 2 == 0)
    {   //abaixo o resultado de sqrt (num) ser? atribuido a vari?vel raiz
        raiz = sqrt (num);
    printf ("\n a raiz quadrada ? igual a: %.3f", raiz);
    }
return (0);
}