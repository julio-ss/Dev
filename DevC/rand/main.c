#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    menu:
    //alimentando o rand de forma diferente. Forcando um inteiro
    srand((unsigned)time(NULL));

    //me retornar um valor entre 0 e 10;
    int ale = rand() % 10 + 1;

    //exibe o valor aleatorio
    printf("Numero aleatorio [%d].\n", ale);

    int a;
    printf("Se deseja outro numero digite 1\nCaso nao digite 2.\n");
    scanf("%d", &a);
    switch(a){
    case 1:
        system("cls");
        goto menu;
        break;
    case 2:
        printf("Tchau...\n");
        break;
    default:
        printf("Valor invalido.\n");
    }

}
