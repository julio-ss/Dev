#include <stdio.h>
#include <string.h>
#include <fstream>
#include <iostream>

using namespace std;

int main(){

    //cria o objeto de arquivo
    ofstream arquivoDeSaida;

    //abre o arquivo ou cria
    arquivoDeSaida.open("log.txt", std::ios_base::app);

    //escreva algo
    arquivoDeSaida << "Aqui deve conter um texto. \n";

    //fecha o arquivo
    arquivoDeSaida.close();

    cout << "Confira o arquivo gerado na pasta.\n";

    return 0;
}
