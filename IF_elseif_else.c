#include <stdio.h>

int main (){

    float nota;
    
    printf ("Insira sua nota: \n");
    scanf("%f", &nota);

    if (nota >= 7.0){
        printf("aluno aprovado \n");
    } else if (nota >=5.0 ) {
        printf("aluno em recuperacao \n");
    } else {
        printf ("aluno reprovado. \n");
    }

}