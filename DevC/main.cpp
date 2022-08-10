#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main(){

    //qual arquivo sera lido
    ifstream input ("texto.txt");

    //stringque recebera o texto lido
    string textoLido;

    //passando o texto do arquivo que sera lido
    for(string line; getline(input, line);){
        textoLido += line;
    }

    //exibindo conteudo
    cout << textoLido;

    return 0;
}
