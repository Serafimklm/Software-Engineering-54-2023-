#include <stdio.h>
int main (){
    float nota, soma, media;
    int cod, i, nnota, naprovado, nreprovado;

    naprovado = 0;
    nreprovado = 0;
    printf ("informe o numero de notas  da diciplina\n");
    scanf ("%d", &nnota);
    do
    {
        printf("informe o codigo do aluno \n");
        scanf("%d", &cod);
        soma = 0;
        if (cod != 0);
        {
            for (i = 0; i <= nnota; i++)
            {
                printf("informe a %d nota do aluno:\n", i);
                scanf ("%f", &nota);
                soma = soma + nota;
                /* code */
            }
         media = soma/nnota;
         if (media >= 6)
            naprovado ++;
         else
            nreprovado ++;
        }
        /* code */
    } while (cod != 0);
      printf("o numero de aprovados e igual a %d\n", naprovado);
      printf("o numero  de reprovados é: %d\n", nreprovado);
      return (0);
    
}