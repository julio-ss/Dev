#include <stdio.h>
#include <string.h>

struct palavra{
    int ordem;
    char letra;
    char texto[255];
};

int main(){
    //Criar uma palavra
    struct palavra primeiraPalavra;

    //Modificando o campo
    primeiraPalavra.ordem = 0;
    primeiraPalavra.letra = 'j';
    strcpy(primeiraPalavra.texto, "Ola mundo!");

    //Mostrar valores da struct
    printf("Ordem: %d.\n", primeiraPalavra.ordem);
    printf("Primeira letra: %c.\n", primeiraPalavra.letra);
    printf("Primeira palavra: %s;\n", primeiraPalavra.texto);

    //Fazendo uma lista de Struct
    struct palavra listaDePalavras[3];

    //Modificando os campos
    listaDePalavras[0].ordem = 0;
    listaDePalavras[1].ordem = 10;
    listaDePalavras[2].ordem = 99;

    listaDePalavras[0].letra = 'a';
    listaDePalavras[1].letra = 'b';
    listaDePalavras[2].letra = 'c';

    strcpy(listaDePalavras[0].texto, "Palavra 1");
    strcpy(listaDePalavras[1].texto, "Palavra 2");
    strcpy(listaDePalavras[2].texto, "Palavra 3");

    int cont;
    for(cont = 0; cont < 3; cont++){
        printf("\nMatriz[%d]\n", cont+1);
        printf("Ordem: %d.\n", listaDePalavras[cont].ordem);
        printf("Letra: %c.\n", listaDePalavras[cont].letra);
        printf("Palavra: %s.\n", listaDePalavras[cont].texto);
    }

    return 0;
}
