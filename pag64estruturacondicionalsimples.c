#include <stdio.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL, "portuguese");

    float num1, num2, resultado;
    int op;

    printf ("digite o primeiro numero: \n");
    scanf ("%f", &num1);
    printf ("digite o segundo numero \n");
    scanf ("%f", &num2);
    printf ("escolha a opera?ão: \n 1 - soma \n 2 - subracao \n 3 - multiplicacao \n 4 - divisao \n");
    scanf ("%d", &op);
    if    (op == 1) 
    {
            resultado = num1 + num2;
            printf("a subtra?ao e: %.3f\n", resultado);
    }

    if (op == 2) 
    {
        resultado = num1 - num2;
        printf("a subratracao e igual a : %.3f \n", resultado);
    }

    if (op == 3)
    {
          resultado = num1 * num2;
          printf("a multiplicacao e: %.3f \n", resultado);
    }

    if (op == 4)
    {
        resultado = num1 / num2;
        printf("a divisao  e: %.3f \n", resultado);
    }
return(0);   
}