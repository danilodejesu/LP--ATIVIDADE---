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

printf("Digite o primeiro número:");
scanf("%d",&primeiroNumero);

fflush(stdin);
printf("Escolha a operação matematica (+,-)");
scanf("%c",&operacao);

printf("Digite o primeiro número:");
scanf("%d",&segundoNumero);

switch (operacao)
{
case '+':
   
   resultado = (primeiroNumero + segundoNumero);
   
    break;

    case '-':
  resultado =  primeiroNumero - segundoNumero;
    break;
printf("Opção inválida");
default:
    break;
}

printf("O resultado é: %d \n",resultado);

}