#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>

int main()
{

    int opcao;

    setlocale(LC_ALL, "portuguese");

    printf("Escolha op��o");
    printf("=====Menu======\n");
    printf(" 1 - ( Novo jogo)\n");
    printf(" 2 - ( Carregar jogo)\n");
    printf(" 3 - ( Configura��o)\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Novo jogo!");
        break;

        case 2:
        printf("Carregar jogo!");
        break;

        case 3:
        printf("Configura��o!");
        break;
    
    default:
    printf("Op��o inv�lida");
        break;
    }


    return 0;
}