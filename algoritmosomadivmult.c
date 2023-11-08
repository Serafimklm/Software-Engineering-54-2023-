#include <stdio.h>

int main (){
	int A, B, soma, subtr, mult, div;
	
	printf ("digite o primeiro valor: \n");
    scanf ("%d", &A);
	printf ("digite o segundo valor: \n");
	scanf ("%d", &B);
	
	soma = A + B;
	subtr = A - B;
	mult = A * B;
	div = A / B;
	
	printf ("Resultados:\n");
	printf ("Soma: %d. \n", soma);
	printf ("Subtra.: %d. \n", subtr);
	printf ("Multiplic.: %d. \n", mult);
	printf ("divisao.: %d. \n", div);
	
	return 0;
    }