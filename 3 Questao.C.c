#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>

int main(){

    setlocale(LC_ALL, "portuguese");
    float nota;
   

printf("Digite nota:");
scanf("%f",&nota);

if (nota >= 9)
{
    printf("Exelente!");
} else if (nota >= 7)
{
printf("Bom!");
} else if (nota >= 5)
{
    printf("Razoavel!");
}else{
    printf("Insuficiente!");
}




return 0;
}

