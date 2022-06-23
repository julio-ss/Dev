#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct palavra{
    int ordem;
    char letra;
    char texto[255];
};


int main(){
    //CRIANDO UMA PALAVRA
    struct palavra primeiraPalavra; //primeiraPalavra e um tipo

    //MODIFICANDO O CAMPO
    primeiraPalavra.ordem = 0;
    primeiraPalavra.letra = 'J';
    strcpy(primeiraPalavra.texto, "Primeira frase");

    //MOSTRANO VALORES DO STRUCT
    printf("Imprimindo valor da Struct.\n");
    printf("Ordem = %d.\n", primeiraPalavra.ordem);
    printf("Letra = %c.\n", primeiraPalavra.letra);
    printf("Frase = %s.\n", primeiraPalavra.texto);

    //FAZENDO UMA LISTA DE STRUCT
    struct palavra listaDePalavra[3]; //definindo 3 campos

    //MODIFICANDO OS CAMPOS
    listaDePalavra[0].ordem = 0;
    listaDePalavra[1].ordem = 1;
    listaDePalavra[2].ordem = 2;

    listaDePalavra[0].letra = 'a';
    listaDePalavra[1].letra = 'b';
    listaDePalavra[2].letra = 'c';

    strcpy(listaDePalavra[0].texto, "Aqui tem");
    strcpy(listaDePalavra[1].texto, "um");
    strcpy(listaDePalavra[2].texto, "texto");

    //PERCORRENDO VETOR
    int cont;
    for(cont = 0; cont < 3; cont++){
         printf("Ordem = %d.\n", listaDePalavra[cont].ordem);
         printf("Letra = %c.\n", listaDePalavra[cont].letra);
         printf("Frase = %s.\n", listaDePalavra[cont].texto);
    }

    return 0;
}