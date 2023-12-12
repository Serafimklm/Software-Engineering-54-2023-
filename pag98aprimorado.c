#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");  /* Inclui as bibliotecas necess�rias e define a localiza?�o para o Portugu?s. */

    int idade, npessoas = 0, npessoasi = 0, npessoass = 0, opiniao;  /* Declara?�o de vari�veis inteiras. */
    float somai = 0, media;  /* Declara?�o de vari�veis de ponto flutuante. */

    printf("Informe a idade (ou digite 0 para finalizar):\n");
    scanf("%d", &idade);  /* Solicita a idade ao usu�rio e armazena na vari�vel 'idade'. */

    while (idade != 0) {  /* In�cio do loop principal, continuar� enquanto a idade for diferente de 0. */
        do {
            printf("Informe a opini�o:\n0- digite 0 para finalizar\n1- satisfat�rio\n2- indiferente\n3- insatisfat�rio\n\n");
            scanf("%d", &opiniao);  /* Solicita a opini�o ao usu�rio e armazena na vari�vel 'opiniao'. */

            if ((opiniao < 0) || (opiniao > 3)) {
                printf("N�mero digitado inv�lido. Tente novamente.\n");  /* Verifica se a opini�o � v�lida. Caso contr�rio, exibe uma mensagem de erro. */
            }

        } while ((opiniao < 0) || (opiniao > 3));  /* Continua o loop do-while enquanto a opini�o for inv�lida. */

        npessoas++;  /* Incrementa o n�mero total de pessoas. */

        if (opiniao == 1) {
            somai = somai + idade;  /* Adiciona a idade ? soma das idades das pessoas satisfeitas. */
            npessoass++;  /* Incrementa o n�mero de pessoas satisfeitas. */
        } else if (opiniao == 3) {
            npessoasi++;  /* Incrementa o n�mero de pessoas insatisfeitas. */
        }

        printf("Informe a idade (ou digite 0 para finalizar):\n");
        scanf("%d", &idade);  /* Solicita a idade novamente para continuar ou finalizar o loop. */
    }
    /*na linha abaixo ele verifica se pelo menos uma pessoa foi inserida, se sim, ele executado tudo que esta apos a abertura da chave*/
    if (npessoas > 0) {
        media = (somai / npessoass);
        printf("O n�mero de pessoas insatisfeitas foi: %d\n", npessoasi);
        printf("O n�mero de pessoas satisfeitas foi %d\n", npessoass);
        printf("A m�dia de idade das pessoas satisfeitas foi %.2f\n", media);
    } else {
        printf("Nenhum dado foi inserido.\n");  /* Exibe uma mensagem se nenhum dado foi inserido. */
    }

    return 0;  /* Retorna 0 indicando que o programa foi executado com sucesso. */
}
