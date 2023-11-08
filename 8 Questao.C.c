#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>

int main()
{

  int numero;
  int i;

  setlocale(LC_ALL, "portuguese");

  printf("Digite um numero positivo:");
  scanf("%d", &numero);

  fflush(stdin);

  for (i = numero; i >= 0; i--)
  {

    printf("%d \n", i);

  }

  return 0;
}