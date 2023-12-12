#include<stdio.h>
int main (){
    int filhos, npessoas;
    float salario, somas, somaf, msalario;
    npessoas = 0;
    somaf = 0;
    somas = 0;
    msalario = 0;
    printf("informe o salário: \n");
    scanf("%f", &salario);

    while (salario != -1)
    {
        printf("informe o numero de filhos: \nou digite (-1) para sair\n");
        scanf("%d", &filhos);
        npessoas++;

        if (salario > msalario)
            msalario = salario;

        somaf = somaf + filhos;
        somas = somas + salario;

        printf ("iforme o salario:\n");
        scanf("%f", &salario);
    }
  printf("a media de salarios e: %.2f\n", somas/npessoas);
  printf("a media de filhos e:%.2f\n", somaf/npessoas);
  printf("o maior salario e: %.2f\n", msalario);
return(0);
}