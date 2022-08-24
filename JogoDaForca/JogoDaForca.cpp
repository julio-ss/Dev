#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>

using namespace std;

void limpaTela(){
    system("CLS");
}

string retornaPalavraAleatoria(){
    //vetor com palavras disponiveis
    string palavras[3] = {"Repolho", "Casa", "Ovolactovegetariano"};

    //indice gerado no intervalo (0,1,2)
    int indiceAleatorio = rand() % 3;

    //exibe a palavra aleatoria
    //cout << palavras[indiceAleatorio];
    
    return palavras[indiceAleatorio];
}

string retornaPalavraComMascara(string palavra, int tamanhoDaPalavra){
    int cont = 0;
    string palavraComMascara;

    //coloca uma mascara
    while(cont < tamanhoDaPalavra){
        palavraComMascara += "_";
        cont++;
    }

    return palavraComMascara;
}

void jogarSozinho(){
    //palavra a ser adivinhada
    string palavra = retornaPalavraAleatoria();

    //tamanho da palavra
    int tamanhoDaPalavra = palavra.size();

    //palavra mascarada
    string palavraComMascara = retornaPalavraComMascara(palavra, tamanhoDaPalavra);

    cout << "A palavra secreta e: " << palavra << " (Tamanho:" << tamanhoDaPalavra << ")" ;
    cout << "\nMascara: " << palavraComMascara;
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
            limpaTela();
            cout << "Iniciando Jogo\n";
            jogarSozinho();
            break;
        case 2:
            cout << "Informacoes do Jogo\n";
            break;
        case 3:
            cout << "Ate logo\n"; 
            break;
        }
    }
}

int main(){
    //criando valores aleatorios
    srand((unsigned)time(NULL));

    menuInicial();

    return 0;
}
