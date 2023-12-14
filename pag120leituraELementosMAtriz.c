#include<stdio.h>
int main ()
{
    int matrizA [2] [10];
    int i, j;
    for (i=0; i<2; i++)
    {
        for (j=0; j<10; j++)
        {
            printf("insira elemento da linha %d, coluna %d:\n", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }
    for (i=0; i<2; i++) // linha 0 e linha 1
    {
        for (j=0; j<10; j++) // elementos da matriz de 0 ate 9
        {
            printf("o elemento da liha %d, coluna %d e: %d\n", i, j, matrizA[i][j]);
        }
    }
 return(0);
}