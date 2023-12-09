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