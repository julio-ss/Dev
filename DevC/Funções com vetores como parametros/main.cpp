#include <stdio.h>
#include <stdlib.h>

void imprimeVetor(int *vetor, int tamanho){
    //variavel contadora
    int i;

    //percorrendo vetor
    for(i = 0; i < tamanho; i++){
        printf("Percorrendo vetor = %d\n", vetor[i]);
    }
}

void modificaVetor(int *vetor, int tamanho){
    int i;

    for(i = 0; i < tamanho; i++){
        vetor[i] = vetor[i] + 1;

    }
}

int main(){
    //definindo vetores
    int v[3] = {1,2,3};

    //mostrando vetor
    imprimeVetor(v, 3);

    //modificando vetor
    modificaVetor(v, 3);

    //mostra vetor
    imprimeVetor(v, 3);

    return 0;
}
