#include <stdio.h>

// Fun??o que calcula a soma de dois n?meros e imprime o resultado
void calcularSoma(int a, int b) {
    int soma = a + b;
    printf("A soma de %d e %d ?: %d\n", a, b, soma);
}

int main() {
    // Chamando a fun??o com tipo de retorno void
    calcularSoma(5, 7);

    return 0;
}