#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

void limpaTela(){
    system("CLS");
}

void jogo(){
    char tabuleiro[10][10];     //tabuleiro
    int linha, coluna;          //variaveis de navegacao

    //populacao do tabuleiro
    for(linha = 0; linha < 10; linha++){
        for(coluna = 0; coluna < 10; coluna++){
            tabuleiro[linha][coluna] = 'A';
        }
    }

    //tabuleiro auxliar
     for(linha = 0; linha < 10; linha++){
        for(coluna = 0; coluna < 10; coluna++){
            cout << tabuleiro[linha][coluna];
        }
    }

}

void menuInicial(){
    //opcao a ser escolhida pelo usuario
    int opcao;

    while(opcao < 1 || opcao > 3){
        limpaTela();
        cout << "Bem vindo a Batalha Naval";
        cout << "\n1 - Jogar";
        cout << "\n2 - Sobre";
        cout << "\n3 - Sair";
        cout << "\nEscolha uma opcao e pressione ENTER: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout << "Jogo iniciado!";
            break;
        case 2:
            cout << "Informacoes do jogo";
            break;
        case 3:
        cout << "Ate mais!";
            break;
        }
    }
}

int main(){
    menuInicial();
    return 0;
}