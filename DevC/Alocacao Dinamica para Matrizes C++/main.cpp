#include <stdio.h>
#include <stdlib.h>
#include <new>

int main(){
    //DEFININDO VARIAVEIS
    int linhas = 3, colunas = 3, i, j;
    int **matriz;

    //LENDO PELO USUARIO
    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);   
    printf("\nDigite o numero de colunas: ");
    scanf("%d", &colunas);

    //ALOCANDO MEMORIA
    matriz = (int **) new int(linhas);

    //ALOCANDO MEMORIA PARA AS COLUNAS DE CADA LINHA
    for(i = 0; i < linhas; i++){
        matriz[i] = (int *) new int(colunas);
    }

    //PREENCHENDO VALORES E EXIBINDO A MATRIZ
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            matriz[i][j] = i;
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}