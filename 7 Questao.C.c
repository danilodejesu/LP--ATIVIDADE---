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

    printf("Escolha opção");
    printf("=====Menu======\n");
    printf(" 1 - ( Novo jogo)\n");
    printf(" 2 - ( Carregar jogo)\n");
    printf(" 3 - ( Configuração)\n");
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
        printf("Configuração!");
        break;
    
    default:
    printf("Opção inválida");
        break;
    }


    return 0;
}