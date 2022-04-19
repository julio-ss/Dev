#include <stdio.h>
#include <stdlib.h>

void main(){
    int a = 1;

    //contando ate 10
    while(a <= 10){
        //valor de a
        printf("\n%d", a);

        //incremento
        a++;
        //a = a + 1;
    }
    //contagem regressiva
    int b=10;
    while (b >= 1){
        printf("\n%d", b);
        b--;
        //b = b - 1;
    }
}
