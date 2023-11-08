#include <stdio.h>

    int main (){
    // abaixo declaramos variavle do tipo main, que cabe numeros inteiros
    int idade = 0;
    // abaixo declaramos variavel do tipo float que cabe numeros decimais
    float altura = 0.0;
    //abaixo declaramos que a variavel char pode ter 50 caracters
    char nome [50] = "";

    printf ("Digite a idade: \n");
    scanf ("%d", &idade);

    printf ("digite a altura: \n");
    scanf ("%f", &altura);
     
    printf ("Digite o nome: \n");
    scanf ("%s", nome);

    printf ("dados imformados \n");
    printf ("idade: %d.\n", idade); //%d vai representar o tipo de numero, no caso inteiro
    printf ("altura: %.2f.\n", altura); /*2f. vai representar o numero decimal de altura, o .2 antes do f indica que tera
    2 casas decimais apos a virgula */
    printf ("nome: %s", nome); /*%f indica que ira ler letras, no maximo 50, como definido no comeco */

    return 0;



    }