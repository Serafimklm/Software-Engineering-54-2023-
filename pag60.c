#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    float num1,num2, resultado;
    int op;
    
    printf("Digite o primeiro n�mero:\n");
    scanf ("%f", &num1);
    printf("digite o segundo n�mero\n");
    scanf ("%f", &num2);
    printf("escolha a opera��o: \n 1- soma \n 2 - subtra��o \n 3 - multiplica��o \n 4 - divis�o  \n");
    scanf ("%d", &op);
    switch (op)
    {
      case 1: 
        resultado = num1 + num2;
        printf("a soma �: %.3f\n", resultado);
        break;
        
      case 2:
        resultado = num1 - num2;
        printf("a subtra��o �: %.3f\n", resultado);
        break;

      case 3:
        resultado = num1 * num2;
        printf("a multiplica��o �: %.3f\n", resultado);
        break;

      case 4:
        resultado = num1 / num2;
        printf("a divi�o �: %.3f \n", resultado);
        break;
      
      default:
      printf("op��o invalida. \n");
      break;
     return (0);
    }

}