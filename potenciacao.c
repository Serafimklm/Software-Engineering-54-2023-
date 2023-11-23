#include <stdio.h>
#include <math.h>

int main (){
    float num1, num2, total;

    printf("informe o primeiro numero:");
    scanf("%f", &num1);
    printf("informe o segundo numero:");
    scanf("%f", &num2);
    total = pow(num1, num2);
    //pow significa potencia, que eleva o num2 elavado a num2
    printf("\n %.2f elevado a %2.f e: %.2f", num1, num2, total);
    return (0);
}