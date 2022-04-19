/*
#include <stdio.h>
#include <stdlib.h>

void main(){
    int vetor[3]; //atribuindo 3 gavetas ao vetor

    //dando valores ao vetor
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    //adicionando 1 a cada valor
    //int j;
    //for(j = 0; j<3; j++){
    //  vetor[j] = vetor[j] + 1;
    //}

    //exibindo valores vetor
    printf("Vetor 0 vale = %d.\n", vetor[0]);
    printf("Vetor 1 vale = %d.\n", vetor[1]);
    printf("Vetor 3 vale = %d.\n", vetor[2]);

    //vetor em laco de repeticao
    int i;
    for(i = 0; i < 3; i++){
        printf("\nPosicao do vetor[%d] = %d.", i, vetor[i]);
    }
}
*/
//METODO LENDO VALORES
#include <stdio.h>
#include <stdlib.h>

void main(){
    int vetor[3], i;

    for(i = 0; i < 3; i++){
        printf("Digite o valor do vetor [%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    printf("\n\n");
    for(i = 0; i < 3; i++){
    printf("Posicao [%d] = %d.\n", i, vetor[i]);
    }
}

//METODO USANDO DFINE
/*
#include <stdio.h>
#include <stdlib.h>
#define TAM 3

void main(){
    int vetor[TAM];

    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    printf("Vetor 0 vale = %d.\n", vetor[0]);
    printf("Vetor 1 vale = %d.\n", vetor[1]);
    printf("Vetor 3 vale = %d.\n", vetor[2]);

    int i;
    for(i = 0; i < TAM; i++){
        printf("\nPosicao do vetor[%d] = %d.", i, vetor[i]);
    }
}
*/
