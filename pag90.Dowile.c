#include<stdio.h>

int main() {
    int par, impar, num;
    par = 0;
    impar = 0;

    do {
        printf("digite um número,\ncaso queira sair, digite 0: \n");
        scanf("%d", &num);

        if (num != 0) {
            if (num % 2 == 0)
                par++;
            else
                impar++;
        }
    } while (num != 0);

    printf("A quantidade de par é %d\n", par);
    printf("A quantidade de impar é %d\n", impar);

    return 0;
}