#include<stdio.h>
int main (){
    int vetorA[10];
    int i, j, troca;
    for (i=0; i<10; i++)
    {
        printf("digite o %d elemento do vetor", i);
        scanf("%d", &vetorA[i]);
    }

    // Algoritmo de ordena?ão: Ordena?ão de Sele?ão
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            // Compara o elemento atual com os elementos subsequentes
            if (vetorA[i] > vetorA[j]) {
                // Se o elemento atual for maior, troca os elementos
                troca = vetorA[i];
                vetorA[i] = vetorA[j];
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