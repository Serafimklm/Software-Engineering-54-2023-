#include<stdio.h>  // Inclui a biblioteca padr�o de entrada e sa�da em C.

#include<string.h>  // Inclui a biblioteca para manipula?�o de strings em C.

int main (){  // Fun?�o principal do programa.

    char palavra[30];  // Declara uma vari�vel do tipo array de caracteres chamada "palavra" com espa?o para 30 caracteres.
    int tam, i;  // Declara duas vari�veis do tipo inteiro chamadas "tam" e "i".

    printf("digite a palavra\n");  // Imprime a mensagem "digite a palavra" na tela.

    gets(palavra);  // L? uma linha da entrada padr�o e armazena na vari�vel "palavra". [Nota: O uso de gets � desencorajado devido a problemas de seguran?a; o ideal seria usar fgets.]

    tam = strlen(palavra);  // Calcula o comprimento da string armazenada em "palavra" e atribui o valor a vari�vel "tam".

    for (i=tam-1; i >=0; i--)  // Loop que itera de tr�s para frente pela string "palavra".
    {
        printf ("%c", palavra[i]);  // Imprime o caractere na posi?�o atual da itera?�o.
    }

    return (0);  // Retorna 0 para indicar que o programa foi conclu�do com sucesso.
}
