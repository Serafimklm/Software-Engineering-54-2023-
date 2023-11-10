#include <stdio.h>

int main (){
    int d;

    printf ("insira um valor de 1 a 7: \n");
    scanf ("%d", &d);

    switch(d){
        /*estrutura de decisao switch case, cada numero vai equivaler a uma palavra*/
        case 1:
            printf("domingo .\n");
            break;
        case 2:
            printf("segunda. \n");
            break;
        case 3:
            printf("terca-feira \n");
            break;
        case 4:
            printf("quarta_feira \n");
            break;
        case 5: 
            printf("quinta_feira \n");
            break;
        case 6:
            printf ("sextafeira \n");
            break;
        case 7:
            printf("sabadofeira \n");
    }       
}