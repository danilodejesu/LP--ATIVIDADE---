#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>

int main(){

int primeiroNumero;
int segundoNumero;
char  operacao;
int resultado;

  setlocale(LC_ALL, "portuguese");

printf("Digite o primeiro n�mero:");
scanf("%d",&primeiroNumero);

fflush(stdin);
printf("Escolha a opera��o matematica (+,-)");
scanf("%c",&operacao);

printf("Digite o primeiro n�mero:");
scanf("%d",&segundoNumero);

switch (operacao)
{
case '+':
   
   resultado = (primeiroNumero + segundoNumero);
   
    break;

    case '-':
  resultado =  primeiroNumero - segundoNumero;
    break;
printf("Op��o inv�lida");
default:
    break;
}

printf("O resultado �: %d \n",resultado);

}