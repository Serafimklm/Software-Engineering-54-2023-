#include <stdio.h>
#include <string.h>
//trocando gets por fgets
int main() {
    char palavra[30];
    int tam, i;

    printf("Digite a palavra:\n");
    fgets(palavra, sizeof(palavra), stdin);

    // Remove a quebra de linha (\n) do final da string, se presente
    if ((tam = strlen(palavra)) > 0 && palavra[tam - 1] == '\n') {
        palavra[tam - 1] = '\0';
    }

    tam = strlen(palavra);

    for (i = tam - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }

    return 0;
}
