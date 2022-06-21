#include <stdio.h>
#include <stdlib.h>

void mostraSucessor(int numero){
    printf("\nO sucessor de %d e %d.\n", numero, numero+1);

}

int retornaSucessor(int numero){
    return numero-1;
}

int main(){
    int a;

    printf("Digite  um valor: ");
    scanf("%d", &a);

    mostraSucessor(a);

    printf("O antecessor de %d e %d.\n", a, retornaSucessor(a));

    return 0;
}
