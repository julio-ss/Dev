#include <stdio.h>
#include <stdlib.h>

void main(){
    int cont; //variavel para contador

    printf("Tabuada do 5\n");
        //valor da variavel| condicao da variavel| tratamento da variavel
    for(cont = 1; cont <= 10; cont++){
        printf("5 x %d = %d\n", cont, 5*cont);
    }
    printf("\n\n");

    //contando de 2 em 2
    printf("Contando de 2 em 2\n");
    for(cont = 0; cont <=10; cont = cont + 2){
        printf("Contando [%d]\n", cont);
    }
    printf("\n\n");

    //contagem regressiva
    printf("Contagem regressiva\n");
    for(cont = 10; cont >= 1; cont--){
        printf("Contagem regressiva [%d].\n", cont);
    }
}
