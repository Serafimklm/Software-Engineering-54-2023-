#include<stdio.h>  // Inclui a biblioteca padrão de entrada e saída em C.

#include<string.h>  // Inclui a biblioteca para manipula?ão de strings em C.

int main (){  // Fun?ão principal do programa.

    char palavra[30];  // Declara uma variável do tipo array de caracteres chamada "palavra" com espa?o para 30 caracteres.
    int tam, i;  // Declara duas variáveis do tipo inteiro chamadas "tam" e "i".

    printf("digite a palavra\n");  // Imprime a mensagem "digite a palavra" na tela.

    gets(palavra);  // L? uma linha da entrada padrão e armazena na variável "palavra". [Nota: O uso de gets é desencorajado devido a problemas de seguran?a; o ideal seria usar fgets.]

    tam = strlen(palavra);  // Calcula o comprimento da string armazenada em "palavra" e atribui o valor a variável "tam".

    for (i=tam-1; i >=0; i--)  // Loop que itera de trás para frente pela string "palavra".
    {
        printf ("%c", palavra[i]);  // Imprime o caractere na posi?ão atual da itera?ão.
    }

    return (0);  // Retorna 0 para indicar que o programa foi concluído com sucesso.
}
