#include<stdio.h>
int main (){
    int vetorA[15];
    int i;
    for ( i = 0; i < 15; i++)
    {
        printf("\ndigite o %d elemento", i);
        scanf("%d", &vetorA[i]);/* code */
    }
    printf("vetor preenchido. \n");
    
    for ( i = 0; i < 15; i++)
    {
        printf("%d -", vetorA[i]);
    }
return(0);
}