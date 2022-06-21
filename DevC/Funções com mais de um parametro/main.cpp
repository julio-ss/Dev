#include <stdio.h>
#include <stdlib.h>

void mostraSoma(int valor1, int valor2){
    printf("A soma de %d e %d = %d.\n", valor1, valor2, valor1+valor2);
}

int main(){
    int a=1,b=2;

    mostraSoma(a,b);
    return 0;
}
