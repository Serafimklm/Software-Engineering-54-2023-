#include<stdio.h>
#include <math.h>
int main (){
    int par, impar, num;
    par = 0;
    impar = 0;
    printf("informe um numero\n");
    scanf("%d", &num);
    while (num != 0)
    {
        if (num % 2 == 0)
        par++;
        else
            impar++;/* code */
        printf("informe o numero: \n");
        scanf("%d", &num);
    }
        printf("a quantidade de apr e: %d\n", par);
        printf("a quantidade de impar e: %d\n", impar);
return (0);
}