
#include<stdio.h>
#include<string.h>

#define NIVEL_MINIMO_CAIXA 10
#define NIVEL_MAXIMO_CAIXA 980
    
int main(void)
{
    float nivelMinimoCaixa, nivelMaximoCaixa, nivelMedicao;
    printf("Informe o nivel da medicao: ");
    scanf("%f", &nivelMedicao);
    char mensagem[30];
    
    if (NIVEL_MINIMO_CAIXA >= nivelMedicao){
        
      strcpy   (mensagem, "Ligar Bomba");
    }else if (nivelMedicao >= NIVEL_MAXIMO_CAIXA){
       strcpy   (mensagem, "Desligar Bomba");
    }else{
       strcpy   (mensagem,"Manter Bomba ligada");
    }    
    printf("%s", mensagem);
}
