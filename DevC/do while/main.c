#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int a = 1;

    while(a <= 10){ // enquanto a for menor ou igual a 10 continue executando/contando
        printf("Valor de 'a' = %d.\n", a);
        a++;
    }

    a = 20; //mudando valor de a
    do{//executa antes de conferir a condicao
        printf("Agora o valor de 'a' e = %d.\n", a);
    }while(a <= 10); //faz a comparacao da condicao depois de ter executado o printf

}
