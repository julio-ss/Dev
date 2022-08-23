#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

void limpaTela(){
    system("CLS");
}

void menuInicial(){
    //Opcao de escolha do usuario
    int opcao = 0;

    //validando que sera digitado uma opcao valida
    while(opcao < 1 || opcao > 3){
        limpaTela();
        cout << "Bem vindo ao Jogo Da Forca";
        cout << "\n1 - Jogar";
        cout << "\n2 - Sobre";
        cout << "\n3 - Sair";
        cout << "\nEscolha uma opcao e pressione ENTER: ";

        //faz a leitura da opcao
        cin >> opcao;

        //executa a opcao selecionada
        switch(opcao){

        case 1:
            cout << "Iniciando Jogo\n";
        case 2:
            cout << "Informacoes do Jogo\n";
        case 3:
            cout << "Ate logo\n";
            break;
        }
    }
}

int main(){
    menuInicial();
    //enviando commit para VsConde
    return 0;
}
