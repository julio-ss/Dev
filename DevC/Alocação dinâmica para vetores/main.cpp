#include <stdio.h>
#include <stdlib.h>

//FAZER O USUARIO DEFINIR O VALOR DE UM VETOR

//retornara um ponteiro
int* alocaVetor(int tamanho){
    //variavel pointer auxiliar
    int *aux;

    //alocacao dinamica de memoria
    aux = (int*) malloc(tamanho * sizeof(int));
                        //tamanho * tamanho de um valor inteiro
    //retorna o ponteiro que aponta para a primeira posicao de memoria do vetor alocado
    return aux;
}

int main(){

    //definindo variavel
    int *vetor, tamanho, cont;

    //lendo o caminho do vetor pelo usuario
    printf("Digite um tamanho para o vetor: ");
    scanf("%d", &tamanho);

    //ponteiro recebe o endereco de memoria que foi alocado para o vetor
    vetor = alocaVetor(tamanho);

    vetor[0] = 0;
    vetor[1] = 10;
    vetor[2] = 20;
    vetor[3] = 30;

    //imprimir vetor
    for(cont = 0; cont < tamanho; cont++){
        printf("%d\n", vetor[cont]);
    }

    free(vetor);

    return 0;
}
