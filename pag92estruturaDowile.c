#include<stdio.h>
int main (){
    float nota, soma, media;
    int cod, i, nnota, naprovado, nreprovado;
    naprovado = 0;
    nreprovado = 0;
    printf("informe o numero de notas da  diciplina: \n");
    scanf("%d", &nnota);
    printf("informe o codigo do aluno: \n");
    scanf("%d", &cod);
    while (cod != 0)
    {
        soma = 0;
        for (i=1; i<=nnota; i++)
        {
            printf("informe a %d nota do aluno:\n", i);
            scanf("%f", &nota);
            soma = soma + nota;
        }   
        media = soma/nnota;
        if (media >= 6)
            naprovado ++;
        else
            nreprovado ++;
        printf("informe o codigo do aluno: \n");
        scanf("%d", &cod); 
    }
    printf ("o numero de aprovados é:%d \n", naprovado);
    printf("o numero de reprovados e: %d\n", nreprovado);
    return(0);

}