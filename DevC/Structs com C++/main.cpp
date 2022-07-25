#include <stdio.h>
#include <string>
#include <iostream>
#include <new>

using namespace std;

//struct para frutas
struct fruta{
    string cor;
    string nome;
};

int main(){

    //criando um ponteiro para o struct criado
    fruta *primeiraFruta = new fruta;

    //modificando valores
    primeiraFruta->cor = "Amarela";
    primeiraFruta->nome = "Banana";

    //exibindo valores
    cout << "Exibindo atibutos da fruta:\n";
    cout << "Fruta: " << primeiraFruta->nome << ", Cor: " << primeiraFruta->cor;

    //criando uma lista de frutas
    fruta *ponteiroListaDeFrutas = new fruta[2];

    //modificando valores
    ponteiroListaDeFrutas[0].cor = "Vermelho";
    ponteiroListaDeFrutas[0].nome = "Morango";
    ponteiroListaDeFrutas[1].cor = "Verde";
    ponteiroListaDeFrutas[1].nome = "Kiwi";

    //percorrendo e exibindo
    cout << "\n\nLista de frutas:\n";
    int cont;
    for(cont = 0; cont < 2; cont++){
        cout <<"Fruta: " << ponteiroListaDeFrutas[cont].nome << ", Cor: " << ponteiroListaDeFrutas[cont].cor;
        cout << "\n";
    }

    return 0;
}
