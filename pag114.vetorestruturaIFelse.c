#include<stdio.h>
int main () {
    int vetorA[10]; // Declara?�o de um array de inteiros chamado vetorA com 10 elementos
    int i, acha, busca; // Declara?�o de vari�veis inteiras i, acha e busca

    for (i = 0; i < 10; i++) {
        printf("digite o %d elemento:", i); // Solicita ao usu�rio que digite o valor para cada elemento do vetorA
        scanf("%d", &vetorA[i]); // Armazena o valor digitado pelo usu�rio no vetorA na posi?�o i
    }

    printf("informe o elemento que deseja buscar:"); // Solicita ao usu�rio que informe o elemento que deseja buscar
    scanf("%d", &busca); // Armazena o valor digitado pelo usu�rio na vari�vel busca

    i = 0; // Inicializa a vari�vel i com 0
    acha = 0; // Inicializa a vari�vel acha com 0

    // In�cio de um loop while que busca o elemento no vetorA
    while ((acha == 0) && (i < 10)) {
        if (vetorA[i] == busca) { // Verifica se o elemento na posi?�o i � igual ao valor buscado
            acha = 1; // Se encontrado, define a vari�vel acha como 1 para indicar que o elemento foi encontrado
        } else {
            i++; // Se n�o encontrado, incrementa i para verificar o pr�ximo elemento
        }
    }

    // Verifica se o elemento foi encontrado e exibe a mensagem apropriada
    if (acha == 1)
        printf("o elemento %d foi encontrado na posi?�o %d", busca, i);
    else 
        printf("o elemento nao foi encontrado");

    return(0); // Retorna 0 para indicar a conclus�o bem-sucedida do programa
}