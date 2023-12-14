#include <stdio.h>

int main (){
    int vetorA[10];
    int i;

    for ( i = 0; i < 10; i++)
    {
       scanf("%d", &vetorA[i]); /* code */
    }

    printf("vetor preenchido\n");
    for ( i = 0; i < 10; i++)
    {
        printf("o elemento da posicao %d e: %d\n", i, vetorA[i]);/* code */
    }
return(0);
    
}