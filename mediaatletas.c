#include <stdio.h>

int main (){
    float n1, n2, n3, n4, media;

    printf ("\n digite a nota nota 1:");
    scanf ("%f", &n1);
    printf("\ndigite a nota 2:");
    scanf("%f", &n2);
    printf("\n digite a nota 3:");
    scanf("%f", &n3);
    printf("digite a 4 nota:");
    scanf("%f", &n4);
    media = (n1 + n2 + n3 + n4) / 4;
    printf ("\n a media e: %.2f \n", media);
    return (0);

}