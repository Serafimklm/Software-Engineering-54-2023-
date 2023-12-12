#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int idade, npessoas = 0, npessoasi = 0, npessoass = 0, opiniao;
    float somai = 0, media;

    printf("Informe a idade (ou digite 0 para finalizar):\n");
    scanf("%d", &idade);

    while (idade != 0) {
        do {
            printf("Informe a opinião:\n0- digite 0 para finalizar\n1- satisfatório\n2- indiferente\n3- insatisfatório\n\n");
            scanf("%d", &opiniao);

            if ((opiniao < 0) || (opiniao > 3)) {
                printf("Número digitado inválido. Tente novamente.\n");
            }

        } while ((opiniao < 0) || (opiniao > 3));

        npessoas++;
        if (opiniao == 1) {
            somai = somai + idade;
            npessoass++;
        } else if (opiniao == 3) {
            npessoasi++;
        }

        printf("Informe a idade (ou digite 0 para finalizar):\n");
        scanf("%d", &idade);
    }

    if (npessoas > 0) {
        media = (somai / npessoass);
        printf("O número de pessoas insatisfeitas foi: %d\n", npessoasi);
        printf("O número de pessoas satisfeitas foi %d\n", npessoass);
        printf("A média de idade das pessoas satisfeitas foi %.2f\n", media);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}

