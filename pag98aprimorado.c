#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");  /* Inclui as bibliotecas necessárias e define a localiza?ão para o Portugu?s. */

    int idade, npessoas = 0, npessoasi = 0, npessoass = 0, opiniao;  /* Declara?ão de variáveis inteiras. */
    float somai = 0, media;  /* Declara?ão de variáveis de ponto flutuante. */

    printf("Informe a idade (ou digite 0 para finalizar):\n");
    scanf("%d", &idade);  /* Solicita a idade ao usuário e armazena na variável 'idade'. */

    while (idade != 0) {  /* Início do loop principal, continuará enquanto a idade for diferente de 0. */
        do {
            printf("Informe a opinião:\n0- digite 0 para finalizar\n1- satisfatório\n2- indiferente\n3- insatisfatório\n\n");
            scanf("%d", &opiniao);  /* Solicita a opinião ao usuário e armazena na variável 'opiniao'. */

            if ((opiniao < 0) || (opiniao > 3)) {
                printf("Número digitado inválido. Tente novamente.\n");  /* Verifica se a opinião é válida. Caso contrário, exibe uma mensagem de erro. */
            }

        } while ((opiniao < 0) || (opiniao > 3));  /* Continua o loop do-while enquanto a opinião for inválida. */

        npessoas++;  /* Incrementa o número total de pessoas. */

        if (opiniao == 1) {
            somai = somai + idade;  /* Adiciona a idade ? soma das idades das pessoas satisfeitas. */
            npessoass++;  /* Incrementa o número de pessoas satisfeitas. */
        } else if (opiniao == 3) {
            npessoasi++;  /* Incrementa o número de pessoas insatisfeitas. */
        }

        printf("Informe a idade (ou digite 0 para finalizar):\n");
        scanf("%d", &idade);  /* Solicita a idade novamente para continuar ou finalizar o loop. */
    }
    /*na linha abaixo ele verifica se pelo menos uma pessoa foi inserida, se sim, ele executado tudo que esta apos a abertura da chave*/
    if (npessoas > 0) {
        media = (somai / npessoass);
        printf("O número de pessoas insatisfeitas foi: %d\n", npessoasi);
        printf("O número de pessoas satisfeitas foi %d\n", npessoass);
        printf("A média de idade das pessoas satisfeitas foi %.2f\n", media);
    } else {
        printf("Nenhum dado foi inserido.\n");  /* Exibe uma mensagem se nenhum dado foi inserido. */
    }

    return 0;  /* Retorna 0 indicando que o programa foi executado com sucesso. */
}
