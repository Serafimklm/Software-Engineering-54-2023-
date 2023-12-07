#include <stdio.h>

int main (){
    int num, ant, suc;
    printf ("digite um numero");
    scanf("%d", &num);

    ant= num - 1;
    suc= num + 1;

    printf("\n o antecessor e: %d", ant);
    printf("\n o sucessor e %d", suc);

    return (0);
    
}