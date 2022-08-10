#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;

int main(){
    //criando o objeto do arquivo
    ofstream arquivo;

    //abre o arquivo
    arquivo.open("texto.txt");

    //esvazia arquivo
    arquivo << "";

    //fecha arquivo
    arquivo.close();
}
