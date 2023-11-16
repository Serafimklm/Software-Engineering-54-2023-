#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale (LC_ALL, "Portuguese");
    int num, resto;
    printf("digite um numero: \n");
    scanf ("%d", &num);
    resto = num / 2;
    resto = num - (resto*2);
    if (resto == 0){
        printf("o n?mero digitado e par");
    }else{
        printf("o n?mero digitado e impar");
        
    }
return 0;
}  