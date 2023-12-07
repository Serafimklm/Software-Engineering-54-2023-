#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "portuguese");

    int num1, num2, total;

    printf("\n digite o primeiro numero");
    scanf("%d", &num1);
    printf("\n digite o segundo numero");
    scanf("%d", &num2);
    total = num1 + num2;
    printf("\n a soma dos  dois numero e igual a: %d", total);
    
return (0);
}