#include <stdio.h>

int main (int argc, char *argv[]){
    int i;
    if (argc > 1){
        printf ("foram inseridos %d argumentos:\n", argc);
        for (i=0; i<argc; i++){
            printf("%s\n", argv [1]);

        }
    }else{
        printf ("nao foram inseridos argumentos: \n");
    }
    return 0;
}