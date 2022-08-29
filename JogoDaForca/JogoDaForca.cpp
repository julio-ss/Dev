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
    string palavras[3] = {"repolho", "casa", "ovolactovegetariano"};

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

void exibeStatus(string palavraComMascara, int tamanhoDaPalavra, int tentativasRestantes, string letrasJaArriscadas, string mensagem){
    cout << mensagem;
    cout << "\nPalavra: " << palavraComMascara << "(Tamanho: " << tamanhoDaPalavra << " )";
    cout << "\nTetativas restantes: " << tentativasRestantes;

    //exibe letras arriscadas
    int cont;
    cout << "\nLetras arriscadas: "; 
    for(cont = 0; cont < letrasJaArriscadas.size(); cont++){
        cout << letrasJaArriscadas[cont] << ", ";
    }
}

void jogarSozinho(){
    //palavra a ser adivinhada
    string palavra = retornaPalavraAleatoria();

    //tamanho da palavra
    int tamanhoDaPalavra = palavra.size();

    //palavra mascarada
    string palavraComMascara = retornaPalavraComMascara(palavra, tamanhoDaPalavra);

    ///VARIAVEIS GERAIS
    int tentativas = 0, maximoDeTentativas = 5;                                 //numero de tentativas e erros
    int cont = 0;                                                              //laco de repeticao
    char letra;                                                               //letra arriscada pelo usuario
    string letrasJaArriscadas;                                               //acumula as tentativas do usuario
    string mensagem = "Bem vindo ao jogo!";                                 //feedback do jogador
    bool jaDigitouLetra = false, acertouLetra = false;                     //auxilia para saber as letras ja arriscadas


    //calculando tentativas restantes
    while(palavra != palavraComMascara && maximoDeTentativas - tentativas > 0){
        limpaTela();
        //status atual do jogo
        exibeStatus(palavraComMascara, tamanhoDaPalavra, maximoDeTentativas - tentativas, letrasJaArriscadas, mensagem);

        //le o palpite
        cout << "\nDigite uma letra: ";
        cin >> letra;

    //percorre letras arriscadas
    for(cont = 0; cont < tentativas; cont++){
        //se encontrar a letra
        if(letrasJaArriscadas[cont] == letra){
            mensagem = "Essa letra ja foi digitada!";
            //indica com a variavel booleana
            jaDigitouLetra = true;
        }
    }

    if(jaDigitouLetra == false){
        letrasJaArriscadas += letra;

        //percorre palavra, se acertar e exibida a letra
        for(cont = 0; cont < tamanhoDaPalavra; cont++){
            if(palavra[cont] == letra){                     //exibir letra na palavra
                palavraComMascara[cont] = palavra[cont];    //exibir letra na palavra

                 acertouLetra = true;
            }
        }

         if(acertouLetra == false){
            mensagem = "Voce errou uma letra!";
        }else{
             mensagem = "Voce acertou uma letra!";
        }
         //aumenta uma tentativa
        tentativas++;
        }
        //reinicia auxiliares
        jaDigitouLetra = false;
        acertouLetra = false;
    }

    if(palavra == palavraComMascara){
        limpaTela();
        cout << "Parabens, voce venceu!";
    }
    else{
        limpaTela();
        cout << "Ops, voce perdeu!";
    }
    
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
