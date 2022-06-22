#include <stdio.h>
#include <stdlib.h>
#include <new>

int main(){
    //DEFININDO VARIAVEIS
    int tamanho, cont;

    //LENDO O TAMANHO
    printf("Digite o tamanho: ");
    scanf("%d", &tamanho);

    //CRIANDO UM PONTEIRO QUE RECEBERA O NOVO VETOR VAZIO   
    int *vetor = new int[tamanho];

    //MODIFICANDO E IMPRIMINDO VALORES
    for(cont = 0; cont < tamanho; cont++){
        vetor[cont] = cont;
        printf("\n%d", vetor[cont]);
    }

    free(vetor);
    return 0;
}