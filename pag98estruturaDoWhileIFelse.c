#include<stdio.h>
#include<locale.h>
int main (){
setlocale (LC_ALL, "Portuguese");
    int idade, npessoas, npessoasi;
    int npessoass, opiniao;
    float somai, media;
    npessoas = 0;
    npessoass = 0;
    npessoasi = 0;
    somai = 0;

    printf("informe a idade:\n");
    scanf ("%d", &idade);

    while (idade !=0)
    {
        do
        {
           printf("informe a opinao:\n0- digite 0 para finalizar\n1- satisfatório\n2- indiferente\n3- insatisfatório\n\n");
           scanf("%d", &opiniao);
           
        } while ((opiniao != 1) && (opiniao !=2) && (opiniao !=3));

        npessoas++;
        if (opiniao == 1)
        {
            somai = somai + idade;
            npessoas ++;
        }
        else
        {
            if (opiniao == 3)
                npessoas ++;
        }
        printf ("informe  aidade: \n");
        scanf("%d", &idade);  
    }
    media = (somai/ npessoas);
    printf("o numero de pessoas insatisfeitas foi: %d\n", npessoasi);
    printf("o numero de pessoas satisfeitas foi %d\n", npessoass);
    printf("a media de idade das pessoas satisfeitas foi  %.2f\n", media);
 return (0);   
}