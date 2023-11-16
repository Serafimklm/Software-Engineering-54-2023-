#include <stdio.h>


float maior (float num1, float num2){
    /*na linha abaixo diz, se o num1 for maior  que o num2, return num1, ja o else, significa que caso o 
    num1 seja menor que o num2, retorn a else*/
    if (num1 > num2)
    /*acima diz, se num1 for maior que num 2, faca o num1, abaixo, no else, diz, senao for faca o num2*/
        return num1;
    else 
        return num2;
}
int main (){
    float x, y, m;
    printf ("insira um valor: \n");
    /*acima diz, leia o valor digitado pelo usuario, abaixo diz, escreva o valor digitado pelo usuario  (do tipo f) na letra X*/
    scanf ("%f", &x);
    printf("insira mais um valor\n");
    scanf ("%f", &y);
    /*abaixo diz que o m sera o maior valor entre x e y*/
    m = maior (x, y); //quando essa funcao e chamada o codigo volta para linha 4, e o valor de x fica em num1 o valor de y fica em num2
    printf("Maior: %2.f\n", m);
    /*acima ele imprime o valor maior e atribuido ao m*/
}