#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>

int main(){

    int opcao;


    setlocale(LC_ALL, "portuguese");

    printf("Escolha um idioma(1: ingl�s 2: Espanhol 3:Franc�s):");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
    
        printf("Ingl�s, Boas-vinda!");
        break;

         case 2:
    
        printf("Espanhol, Boas-vinda!");
        break;

         case 3:
   
        printf("Franc�s, Boas-vinda!");
        break;
   
    default:
    printf("Op��o inv�lida");
        break;
    }

    return 0;
}