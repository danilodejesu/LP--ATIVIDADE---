#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>

int main(){


    setlocale(LC_ALL, "portuguese");

    int idade;

printf("Digite idade em anos:");
scanf("%d",&idade);

if (idade >= 18)
{
    printf("Acesso permitido!");
} else {
    printf("Acesso negado!");
}

return 0;

} 