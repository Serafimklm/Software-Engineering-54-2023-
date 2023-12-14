#include<stdio.h>
int main () {
    int vetorA[10]; // Declara?ão de um array de inteiros chamado vetorA com 10 elementos
    int i, acha, busca; // Declara?ão de variáveis inteiras i, acha e busca

    for (i = 0; i < 10; i++) {
        printf("digite o %d elemento:", i); // Solicita ao usuário que digite o valor para cada elemento do vetorA
        scanf("%d", &vetorA[i]); // Armazena o valor digitado pelo usuário no vetorA na posi?ão i
    }

    printf("informe o elemento que deseja buscar:"); // Solicita ao usuário que informe o elemento que deseja buscar
    scanf("%d", &busca); // Armazena o valor digitado pelo usuário na variável busca

    i = 0; // Inicializa a variável i com 0
    acha = 0; // Inicializa a variável acha com 0

    // Início de um loop while que busca o elemento no vetorA
    while ((acha == 0) && (i < 10)) {
        if (vetorA[i] == busca) { // Verifica se o elemento na posi?ão i é igual ao valor buscado
            acha = 1; // Se encontrado, define a variável acha como 1 para indicar que o elemento foi encontrado
        } else {
            i++; // Se não encontrado, incrementa i para verificar o próximo elemento
        }
    }

    // Verifica se o elemento foi encontrado e exibe a mensagem apropriada
    if (acha == 1)
        printf("o elemento %d foi encontrado na posi?ão %d", busca, i);
    else 
        printf("o elemento nao foi encontrado");

    return(0); // Retorna 0 para indicar a conclusão bem-sucedida do programa
}