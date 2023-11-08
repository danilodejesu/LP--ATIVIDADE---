#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>

int main(){

    int opcao;


    setlocale(LC_ALL, "portuguese");

    printf("Escolha um idioma(1: inglês 2: Espanhol 3:Francês):");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
    
        printf("Inglês, Boas-vinda!");
        break;

         case 2:
    
        printf("Espanhol, Boas-vinda!");
        break;

         case 3:
   
        printf("Francês, Boas-vinda!");
        break;
   
    default:
    printf("Opção inválida");
        break;
    }

    return 0;
}