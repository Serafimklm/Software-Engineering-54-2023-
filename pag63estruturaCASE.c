#include <stdio.h>
#include <locale.h>

int main (){
    // Configura��o da localidade para Portugu�s
    setlocale(LC_ALL, "Portuguese");
    
    // Declara��o das vari�veis num1, num2, resultado e op
    float num1, num2, resultado;
    int op;

    // Solicita��o do primeiro n�mero ao usu�rio
    printf("digite o primeiro numero");
    scanf("%f", &num1);
    
    // Solicita��o do segundo n�mero ao usu�rio
    printf("digite o segundo n�mero:\n");
    scanf("%f", &num2);
    
    // Apresenta��o das op��es de opera��o ao usu�rio
    printf("escolha a operacao: \n 1 - soma \n 2 - subtracao \n 3 - multiplicacao \n 4 - divisao \n" );
    
    // Leitura da escolha da opera��o pelo usu�rio
    scanf("%d", &op);
    
    // Verifica a escolha do usu�rio e realiza a opera��o correspondente
    if (op == 1) {
        resultado = num1 + num2;
        printf("a soma �: %.3f\n", resultado);
    }
    else {
        if (op == 2) {
            resultado = num1 - num2;
            printf("a subtracao �: %.3f\n", resultado);
        }
        else {
            if (op == 3) {
                resultado = num1 * num2;
                printf("a multiplicacao � : %.3f \n", resultado);
            }
            else {
                resultado = num1 / num2;
                printf("a divisao e: %.3f \n", resultado);
            }
        }
    }
    
    // Retorna 0 para indicar que o programa foi executado com sucesso
    return(0);
}
