#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"portuguese"); //definindo acentuacao para o idioma | NULL para idioma do sistema
    int opcao;

    while(opcao < 1 || opcao > 3){ //confere e valida a var opcao

        printf("Escolha uma opção:\n");
        printf("Opção 1\n");
        printf("Opção 2\n");
        printf("Opção 3\n");

        printf("\nOpção: ");
        scanf("%d", &opcao);

    switch(opcao){
    case 1:
        system ("cls");
        printf("Opção [1] foi escolhida.\n");
        break;
    case 2:
        system ("cls");
        printf("Opção [2] foi escolhida.\n");
        break;
    case 3:
        system ("cls");
        printf("Opção [3] foi escolhida.\n");
        break;
    default:
        system("cls");
        printf("Opção inválida.\n");

        }
    }
}
