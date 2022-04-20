#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std; // dispenca o std::

int main(){

    std::string palavra;

    //printf("Digite uma palavra: ");
    cout << "Digite uma palavra: "; // imprimindo na tela

    cin >> palavra; // lendo uma string
    cout << "A palavra e: " << palavra; // imprimindo uma variavel


   return 0;

}

