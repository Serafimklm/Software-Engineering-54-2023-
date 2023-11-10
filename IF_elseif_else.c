#include <stdio.h>

int main (){

    float nota;
    
    printf ("Insira sua nota: \n");
    scanf("%f", &nota);
    /*if equivale ao (se do portugol)*/
    if (nota >= 7.0){
        printf("aluno aprovado \n");
    /*else equivale ao  sen?o se em portugol */
    } else if (nota >=5.0 ) {
        printf("aluno em recuperacao \n");
    /*o else abaixo equivale ao senao*/
    } else {
        printf ("aluno reprovado. \n");
    }

}