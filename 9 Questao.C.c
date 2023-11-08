#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>

int main()
{
  int i;
  int numero;
  int divisor = 0;

  setlocale(LC_ALL, "portuguese");

  printf("Digie um numero inteiro:");
  scanf("%d", &numero);


  printf("Digite um numero:");
  scanf("%d", &numero);

  for (i = 2; i <= numero; i++)
  {
    if (numero % i == 0)
    {
      divisor++;
    }
  }
  if (divisor == 2)
  {
    printf("Não são numeros primos");
  }
  else
  {
    printf("São primos");
  }

  return 0;
}
