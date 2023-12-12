#include<stdio.h>
int main (){
    int num, i, qtdade;
    printf ("informe o numero: \n");
    scanf("%d", &num);
    qtdade = 0;
    for (i=1; i <=num; i++)
    {
        if (num % i == 0) 
            qtdade ++;
    }
    if (qtdade == 2)
        printf ("o numero e primo \n");
    else
        printf("nao e primo. \n");
return(0);
}