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

  

        printf("Digite o primeiro n�mero:");
        scanf("%d", &primeiroNumero);

        
        printf("Digite o segundo n�mero:");
        scanf("%d", &segundoNumero);
    
if (primeiroNumero > segundoNumero){

    printf("O maior n�mero � o primerio numero!\n");
    printf("O menor numero � o sengundo numero!\n");
} else {
    printf("O menor n�mero � o primeiro n�mero!\n");
    printf("O maior n�mero � o segundo numero!\n");
    


}

    





    return 0;
}
