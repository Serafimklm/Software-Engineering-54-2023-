#include <stdio.h>
#include <stdlib.h>

void validarMeta(int dia1[3][3], int dia2[3][3]){
    /*comecar a implementar aqui
 este programa est? incompleto, faltando implementar a fun??o validarMeta, na qual devem ser implementadas as seguintes regras:
1- Fazer leitura de um valor de meta.
2- Somar os valores das duas matriz.
3- Mostrar em formato de matriz a matriz total.
4- Escrever na tela os setores que alcan?aram a meta.

Exemplifica??o da sa?da do programa na fun??o validarMeta:
*/

}
int main (){

    int dia1[3][3];
    int dia2[3][3];
    int i, j = 0;

    /*leitura da matriz no primeiro dia*/
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf ("digite o total de pessoas %d de %dj\n", (i+1), (j+1));
            scanf ("%d", &dia1[i][j]);
        }
    }
    for (i=0; i <3; i++){
        for (j=0; j<3; j++){
            printf("digite o total de pessoas do setor %d de %d\n", (i+1), (j+1));
            scanf ("%d", &dia2[i][j]);
        }
    }
    /*ler a meta, somar matriz, escrever matriz total, escrever setores que alcancaram a meta, */
    validarMeta(dia1, dia2);
}