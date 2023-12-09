#include <stdio.h>
int main (){
    int op;
    float total;

    total = 0;
    printf("1 - italiano \n 2 - japones \n 3 - salvadorenho \n");
    printf ("informe o prato desejado: \n");
    scanf  ("%d", &op);
         switch (op)
    {
        /*estrutura switch case, caso selecione 1, total recebe o valor de
        750, e nisso ja nao executa os outros case dessa estrutura*/
        case 1: total = total + 750;
            break;
        case 2: total = total + 324;
            break;
        case 3: total = total + 545;
            break;
    }
    printf("1 - cha \n 2 - suco de laranja \n 3 - refrigerante \n");
    printf("informe a bebida desejada: \n");
    scanf("%d", &op);
        switch (op)
        {
         /*estrutra switch case, caso selecione o 3, o valor 90 sera
         acrecido ao total, que ja possui o valor de 750, supondo que o usuario digitou 
         o numero 1 antes e agora 3, ou seja, 750 + 90 = 840*/
         case 1: total = total + 30;
         break;
         case 2: total = total + 80;
         break;
         case 3: total = total + 90;
         break;
         default:
          break;
        }
    printf("o total de clorias é dec %.2f \n", total);
return (0);

}