#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    
    float deposito, taxa, rendimento, total;

    printf("informe o valor do dep?sito:\n");
    scanf("%f", &deposito);
    printf("\n informe a taxa de juros do dep?sito:");
    scanf("%f", &taxa);
    rendimento = deposito * (taxa/100);
    total = deposito + rendimento;

    printf("\n o rendimento ? %.2f", rendimento);
    printf("\n o valor total ? %.2f", total);
    return (0);
}