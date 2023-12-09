#include <stdio.h>
int main (){
    float altura, peso;
    char sexo;

    printf ("informe o sexo: (M/F): \n");
    scanf ("%c", &sexo);
    printf("informe a altura: \n");
    scanf ("%f", &altura);
    if ((sexo == 'F') || (sexo == 'f'))
    {
        peso = (62.1* altura ) - 44.7;
    }
    else 
    {
        peso = (72.7* altura) - 58;
    }
    printf("o sexo e: %c\n", sexo);
    printf("a altura e: %.2f\n", altura);
    printf("o peso idela e: %.2f\n", peso);
return (0);
}