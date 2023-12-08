#include <stdio.h>
#include <locale.h>

int main (){
    // Configuração da localidade para Português
    setlocale(LC_ALL, "Portuguese");
    
    // Declaração das variáveis num1, num2, resultado e op
    float num1, num2, resultado;
    int op;

    // Solicitação do primeiro número ao usuário
    printf("digite o primeiro numero");
    scanf("%f", &num1);
    
    // Solicitação do segundo número ao usuário
    printf("digite o segundo número:\n");
    scanf("%f", &num2);
    
    // Apresentação das opções de operação ao usuário
    printf("escolha a operacao: \n 1 - soma \n 2 - subtracao \n 3 - multiplicacao \n 4 - divisao \n" );
    
    // Leitura da escolha da operação pelo usuário
    scanf("%d", &op);
    
    // Verifica a escolha do usuário e realiza a operação correspondente
    if (op == 1) {
        resultado = num1 + num2;
        printf("a soma é: %.3f\n", resultado);
    }
    else {
        if (op == 2) {
            resultado = num1 - num2;
            printf("a subtracao é: %.3f\n", resultado);
        }
        else {
            if (op == 3) {
                resultado = num1 * num2;
                printf("a multiplicacao é : %.3f \n", resultado);
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
