#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>

using namespace std;

void limpaTela()
{
    system("CLS");
}

string retornaPalavraAleatoria()
{
    // vetor com palavras disponiveis
    string palavras[3] = {"repolho", "casa", "ovolactovegetariano"};

    // indice gerado no intervalo (0,1,2)
    int indiceAleatorio = rand() % 3;

    // exibe a palavra aleatoria
    // cout << palavras[indiceAleatorio];

    return palavras[indiceAleatorio];
}

string retornaPalavraComMascara(string palavra, int tamanhoDaPalavra)
{
    int cont = 0;
    string palavraComMascara;

    // coloca uma mascara
    while (cont < tamanhoDaPalavra)
    {
        palavraComMascara += "_";
        cont++;
    }

    return palavraComMascara;
}

void exibeStatus(string palavraComMascara, int tamanhoDaPalavra, int tentativasRestantes, string letrasJaArriscadas, string mensagem)
{
    cout << mensagem;
    cout << "\nPalavra: " << palavraComMascara << "(Tamanho: " << tamanhoDaPalavra << " )";
    cout << "\nTetativas restantes: " << tentativasRestantes;

    // exibe letras arriscadas
    int cont;
    cout << "\nLetras arriscadas: ";
    for (cont = 0; cont < letrasJaArriscadas.size(); cont++)
    {
        cout << letrasJaArriscadas[cont] << ", ";
    }
}

int jogar(int numeroDeJogadores)
{
    //palavra a ser adivinhada
    string palavra;

    //confere numero de jogadores
    if(numeroDeJogadores == 1){
        //palavra a ser adivinhada
        palavra = retornaPalavraAleatoria();
    }else{
        cout << "\nDigite uma palavra: ";
        cin >> palavra;
    }

    // tamanho da palavra
    int tamanhoDaPalavra = palavra.size();

    // palavra mascarada
    string palavraComMascara = retornaPalavraComMascara(palavra, tamanhoDaPalavra);

    /// VARIAVEIS GERAIS
    int tentativas = 0, maximoDeTentativas = 10;       // numero de tentativas e erros
    int cont = 0;                                      // laco de repeticao
    char letra;                                        // letra arriscada pelo usuario
    int opcao;                                         // opcaoes do jogo
    string letrasJaArriscadas;                         // acumula as tentativas do usuario
    string mensagem = "Bem vindo ao jogo!";            // feedback do jogador
    bool jaDigitouLetra = false, acertouLetra = false; // auxilia para saber as letras ja arriscadas

    // calculando tentativas restantes
    while (palavra != palavraComMascara && maximoDeTentativas - tentativas > 0)
    {
        limpaTela();
        // status atual do jogo
        exibeStatus(palavraComMascara, tamanhoDaPalavra, maximoDeTentativas - tentativas, letrasJaArriscadas, mensagem);

        // le o palpite
        cout << "\nDigite uma letra: ";
        cin >> letra;

        // percorre letras arriscadas
        for (cont = 0; cont < tentativas; cont++)
        {
            // se encontrar a letra
            if (letrasJaArriscadas[cont] == letra)
            {
                mensagem = "Essa letra ja foi digitada!";
                // indica com a variavel booleana
                jaDigitouLetra = true;
            }
        }

        if (jaDigitouLetra == false)
        {
            letrasJaArriscadas += tolower(letra);

            // percorre palavra, se acertar e exibida a letra
            for (cont = 0; cont < tamanhoDaPalavra; cont++)
            {
                if (palavra[cont] == tolower(letra))
                {                                            // exibir letra na palavra
                    palavraComMascara[cont] = palavra[cont]; // exibir letra na palavra

                    acertouLetra = true;
                }
            }

            if (acertouLetra == false)
            {
                mensagem = "Voce errou uma letra!";
            }
            else
            {
                mensagem = "Voce acertou uma letra!";
            }
            // aumenta uma tentativa
            tentativas++;
        }
        // reinicia auxiliares
        jaDigitouLetra = false;
        acertouLetra = false;
    }

    if (palavra == palavraComMascara)
    {
        limpaTela();
        cout << "Parabens, voce venceu!";
        cout << "\nDeseja reiniciar?";
        cout << "\n1 - Sim.";
        cout << "\n2 - Nao.";
        cout << "\nOpcao: ";
        cin >> opcao;
        return opcao;
    }
    else
    {
        limpaTela();
        cout << "Ops, voce perdeu!";
        cout << "\nDeseja reiniciar?";
        cout << "\n1 - Sim.";
        cout << "\n2 - Nao.";
        cout << "\nOpcao: ";
        cin >> opcao;
        return opcao;
    }
    return 0;
}

void menuInicial()
{
    // Opcao de escolha do usuario
    int opcao = 0;

    // validando que sera digitado uma opcao valida
    while (opcao < 1 || opcao > 3)
    {
        limpaTela();
        cout << "Bem vindo ao Jogo Da Forca";
        cout << "\n1 - Jogar sozinho";
        cout << "\n2 - Jogar em dupla";
        cout << "\n3 - Sobre";
        cout << "\n4 - Sair";
        cout << "\nEscolha uma opcao e pressione ENTER: ";

        // faz a leitura da opcao
        cin >> opcao;

        // executa a opcao selecionada
        switch (opcao)
        {

        case 1:
            limpaTela();
            if (jogar(1) == 1)
            {
                menuInicial();
            }
            break;
        case 2:
            limpaTela();
            if (jogar(2) == 1)
            {
                menuInicial();
            }
            break;
        case 3:
            cout << "Informacoes do Jogo\n";
            limpaTela();
            cout << "Jogo desenvolvido por Julio.";
            cout << "\n1 - Voltar ao menu inicial.";
            cout << "\n3 - Sair.";
            cout << "\nOpcao: ";
            cin >> opcao;
            if (opcao == 1)
            {
                menuInicial();
            }
            break;
        case 4:
            cout << "Ate logo\n";
            break;
        }
    }
}

int main()
{
    // criando valores aleatorios
    srand((unsigned)time(NULL));

    menuInicial();

    return 0;
}
