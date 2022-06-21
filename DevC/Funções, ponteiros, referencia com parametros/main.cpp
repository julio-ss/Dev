#include <stdio.h>
#include <stdlib.h>

void aumentaDez(int *numero){
    *numero = *numero + 10;
}

int main(){
    int a=5;

    printf("\nValor da variavel = %d.\n", a);
    printf("Variavel ponteiro recebendo valor da variavel anterior.\n");
    aumentaDez(&a);
    printf("Valor da variavel atual = %d.\n", a);


    return 0;
}
