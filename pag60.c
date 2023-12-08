#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    float num1,num2, resultado;
    int op;
    
    printf("Digite o primeiro número:\n");
    scanf ("%f", &num1);
    printf("digite o segundo número\n");
    scanf ("%f", &num2);
    printf("escolha a operação: \n 1- soma \n 2 - subtração \n 3 - multiplicação \n 4 - divisão  \n");
    scanf ("%d", &op);
    switch (op)
    {
      case 1: 
        resultado = num1 + num2;
        printf("a soma é: %.3f\n", resultado);
        break;
        
      case 2:
        resultado = num1 - num2;
        printf("a subtração é: %.3f\n", resultado);
        break;

      case 3:
        resultado = num1 * num2;
        printf("a multiplicação é: %.3f\n", resultado);
        break;

      case 4:
        resultado = num1 / num2;
        printf("a divião é: %.3f \n", resultado);
        break;
      
      default:
      printf("opção invalida. \n");
      break;
     return (0);
    }

}