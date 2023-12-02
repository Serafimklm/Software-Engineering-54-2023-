#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void validarMeta(int dia1[3][3], int dia2[3][3]) {
    int meta[3][3];
    int total[3][3];

    // Passo 1: Ler o valor da meta por setor
    printf("\nDigite a meta por setor:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite a meta para o setor %d de %d: ", (i+1), (j+1));
            scanf("%d", &meta[i][j]);
        }
    }

    // Passo 2: Somar os valores das duas matrizes
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            total[i][j] = dia1[i][j] + dia2[i][j];
        }
    }

    // Passo 3: Mostrar a matriz total em formato de matriz
    printf("\nMatriz Total:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", total[i][j]);
        }
        printf("\n");
    }

    // Passo 4: Escrever na tela os setores que alcan?aram ou n?o a meta
    printf("\nResultados por setor:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (total[i][j] >= meta[i][j]) {
                printf("Setor %d de %d atingiu a meta (%d >= %d).\n", (i+1), (j+1), total[i][j], meta[i][j]);
            } else {
                printf("Setor %d de %d n?o alcan?ou a meta (%d < %d).\n", (i+1), (j+1), total[i][j], meta[i][j]);
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int dia1[3][3];
    int dia2[3][3];
    int i, j = 0;

    // Leitura da matriz no primeiro dia
    printf("Leitura da matriz no primeiro dia:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o total de pessoas do setor %d de %d: ", (i+1), (j+1));
            scanf("%d", &dia1[i][j]);
        }
    }

    // Leitura da matriz no segundo dia
    printf("\nLeitura da matriz no segundo dia:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o total de pessoas do setor %d de %d: ", (i+1), (j+1));
            scanf("%d", &dia2[i][j]);
        }
    }

    // Chamar a fun??o validarMeta
    validarMeta(dia1, dia2);

    return 0;
}
