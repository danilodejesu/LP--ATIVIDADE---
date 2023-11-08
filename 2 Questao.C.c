#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>

int main()
{
   // int finalDsemana;
   // int diautil;
    float desconto = 0;
    float totalApaga = 0;
    int dia;
    float valor;

    setlocale(LC_ALL, "portuguese");

    printf("Digite o total a pagar:");
    scanf("%f", &valor);
    fflush(stdin);

    printf("Escolha dia da semana em número de (1 a 7):");
    scanf("%d", &dia);

    fflush(stdin);
 
    
        switch (dia) {
        
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        if (valor > 100) {

            desconto = valor * 0.1;
            totalApaga = valor - desconto;
            
         printf("Dia de semana\n");
            break;
        }
        
        case 1:
        case 7:
        if (valor > 100){

            desconto = valor * 0.15;
            totalApaga = valor - desconto;
            printf("Final de semana\n");
            break;
            
        }
        
          default:
            printf("Opção inválida\n");
            break;
        }

    printf("desconto:%.2f\n", desconto);
    printf("total a paga R$:%.2f \n", totalApaga);

    return 0;
}
