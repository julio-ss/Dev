#include <stdio.h>
#include <stdlib.h>

#define TAM 10 //var de valor inalteravel

void main(){
    printf("Valor da DEFINE[TAM] = %d\n\n", TAM);

    int i;
    for(i = 1; i <= TAM; i++){
        printf("Contando TAM [%d]\n", i);
    }
}
