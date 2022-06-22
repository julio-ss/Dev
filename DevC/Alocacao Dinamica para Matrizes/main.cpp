#include <stdio.h>
#include <stdlib.h>

/*
    PONTEIRO DE PONTEIRO, E VETORES DE VETORES
    ARRAY DE PONTEIROS
    **FLOAT  *FLOAT     FLOAT
        P -> P[0]    -> [P=0,0] [P=0,1] [P=0,2] [...] [P=0,N1]
             P[1]    -> [P=1,0] [P=1,1] [P=1,2] [...] [P=1,N1]
             P[...]  -> ...
             P[M-1]  -> [P=M1,0] [P=M1,1] [P=M1,2] [...] [P=M1,N1]

*/

int main(){
    //DEFININDO VARIAVEIS
    int linhas = 3, colunas = 3, i, j;
    int **matriz;

    //USUARIO INSERINDO VALOR DE LINHAS
    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);

    //USUARIO INSERINDO VALOR DE COLUNAS
    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);

    //ALOCANDO AS LINHAS
    matriz = (int **) malloc(linhas * sizeof(int *));

    //ALOCANDO MEMORIA PARA AS COLUNAS DE CADA LINHA
    for(i = 0; i < linhas; i++){
        matriz[i] = (int *) malloc(colunas * sizeof(int));
    }

    //PREENCHENDO VALORES E EXIBINDO A MATRIZ
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            matriz[i][j] = i;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    free(matriz);

    return 0;
}