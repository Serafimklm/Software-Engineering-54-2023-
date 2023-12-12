#include<stdio.h>
int main (){
    int num, i, fat;
    printf ("informe o numero:");
    scanf  ("%d", &num);
    fat = 1;
    for (i = 1; i <= num; i++)
        fat = fat * i;
     printf("o fatorial e: %d\n", fat);
     return (0);
}