#include <stdio.h>

int main (){
    float deposito, taxa, rendimento, total;

    printf("informe o valor do deposito:");
    scanf("%f", &deposito);
    printf("\n informe a taxa de juros:");
    scanf("%f", &taxa);
    rendimento = deposito * (taxa/100);
    //suponhamos taxa=5, deposito=50. 5/100= 0,05   0,05*50=2.5$
    total = deposito + rendimento;
    printf("\n o rendimento: %.2f", rendimento);
    printf("\n o total e: %.2f", total);
    return (0);
}