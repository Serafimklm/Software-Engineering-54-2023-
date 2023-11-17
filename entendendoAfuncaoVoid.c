#include <stdio.h>
#include <stdlib.h>
/*caso queira que void receba algum dado, basta adcionalo nos parenteses, j? {} serve para ser o corpo da fun?ao, j? para
criar o prototipo da fun??o, basta colocar um ponto e virgula no lugar de {}*/
void mostrarLinha();

void mostrarLinha(){
    printf ("\n----------------------\n");
}
int main (){
    /*toda vez que eu chamar o mostrarLinha, ele vai execultar as instru??es que est?o dentros das chaves, na linha 8*/
    mostrarLinha ();
    
    mostrarLinha ();
    printf ("Minas gerais");
    mostrarLinha ();
    printf ("s?o paulo");
    mostrarLinha ();
    printf ("rio de janeiro");
    mostrarLinha ();
    printf ("rio grande do sul");
    return 0;
    }