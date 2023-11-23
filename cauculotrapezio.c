#include <stdio.h>

int main (){
    float base1, base2, altura, area;

    printf("informe o valor da base maior:");
    scanf("%f", &base1);
    printf("digite o valor da base menor");
    scanf("%f", &base2);
    printf("informe o valor da altura:");
    scanf("%f", &altura);
    area = ((base1 + base2) * altura) /2;\
/*supondo que base1=5, base2=8, altura=6
cauculo 5+8=13, 13*6=78, 78/2=39, logo, o resultado sera 39*/
    printf("\n a area do trapezio e, %.2f", area);
    return (0);
    }