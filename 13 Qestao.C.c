#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>

int main()
{
    
    int primeiroNumero;
    int segundoNumero;
    setlocale(LC_ALL, "portuguese");

  

        printf("Digite o primeiro número:");
        scanf("%d", &primeiroNumero);

        
        printf("Digite o segundo número:");
        scanf("%d", &segundoNumero);
    
if (primeiroNumero > segundoNumero){

    printf("O maior número é o primerio numero!\n");
    printf("O menor numero é o sengundo numero!\n");
} else {
    printf("O menor número é o primeiro número!\n");
    printf("O maior número é o segundo numero!\n");
    


}

    





    return 0;
}
