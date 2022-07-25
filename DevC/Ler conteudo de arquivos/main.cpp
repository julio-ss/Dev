#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    //cursor que ira percorrer cada letra
    int c;
    char palavra[255];
    int cont = 0;

    //arquivo a ser lido
    FILE *file;

    //abre o arquivo no diretorio escolhido
    file = fopen("texto.txt","r");

    //se o argumento for encontrado
    if(file){

        //encotra letras(ate o fim do arquivo)
        while((c = getc(file)) != EOF){ //end of file
            //imprime na tela
            printf("%c", c);

            //vetor recebe a letra atual
            palavra[cont] = c;

            //aumenta a contagem de letras
            cont++;
        }
        fclose(file);
        //imprimindo conteudo lido
    }
    for(cont = 0; cont < strlen(palavra) - 2; cont++){
        printf("\n%c", palavra[cont]);
    }

    return 0;
    }
