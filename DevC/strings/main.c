#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    char palavra[255];

    printf("Digite uma palavra: ");

    //limpando o buffer
    setbuf(stdin, 0);

    //lendo a string
    fgets(palavra, 255, stdin);

    //limpando casas nao utilizadas
//    palavra(strlen(palavra)-1) = '\0';

    //mostrar na tela
    printf("%s", palavra);
}
