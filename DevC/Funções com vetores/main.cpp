#include <stdio.h>
#include <stdlib.h>

void imprimeVetor(int *vetor, int tamanho){
    int i;
    //imprimindo o valor
    for(i=0; i< tamanho; i++){
        printf("%d\n", vetor[i]);
    }

}

int main (){
    int v[3] = {1,2,3};

    imprimeVetor(v, 3);

    return 0;
}
