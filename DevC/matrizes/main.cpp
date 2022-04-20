#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

int main(){
    //criando matrizes
    int matriz[2][2], i, j;

    //passando valores
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;

    //mostrando na tela
    //cout << "Indice das matrizes";
    cout << "Valores das matrizes\n";
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            //cout << "\ni = " << i << " | j = " << j; // indice das matrizes
            cout << matriz [i][j] << " | "; // valor das matrizes
        }
        cout << "\n";
    }


    return 0;
}
