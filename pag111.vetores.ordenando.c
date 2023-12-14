#include<stdio.h>
int main (){
    int vetorA[10];
    int i, j, troca;
    for (i=0; i<10; i++)
    {
        printf("digite o %d elemento do vetor", i);
        scanf("%d", &vetorA[i]);
    }

    for ( i = 0; i < 9; i++)
    {
        for (j = i + 1; j<10; j++)/* code */
        {
            if(vetorA[i] > vetorA [j])
            {
                troca= vetorA[i];
                vetorA[i] = vetorA [j];
                vetorA[j] = troca;
            }
        }    
    }
    printf("\n O VETOR ORDENADO:\n");
    for (i=0; i<10; i++)
    {
        printf("%d -", vetorA[i]);
    }
return (0);
}