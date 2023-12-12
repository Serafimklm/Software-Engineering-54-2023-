#include<stdio.h>
//o programa sera encerrado quando for digitado o valor zero para idade
int main (){
    int idade, npessoas;
    float altura, somaa, somai;
    somaa = 0;
    somai = 0;
    npessoas = 0;
    printf("informe a idade \n");
    scanf("%d", &idade);

    while (idade != 0)
    {
        printf("informe a altura: \n");
        scanf("%f", &altura);
        npessoas++;

        somai = somai + idade;
        somaa = somaa + altura;
        printf("informe a idade:\n");
        scanf("%d", &idade);
    } //abaixo se faz a divisao para tirar a media para o programa
    printf("a media de altura e: %.2f\n", somaa/npessoas);
    printf("a media de idade e: %.2f\n", somai/npessoas);
return (0);
}