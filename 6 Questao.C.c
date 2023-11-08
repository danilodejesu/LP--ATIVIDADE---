#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>

int main()
{

  setlocale(LC_ALL, "portuguese");

  int codigo;
  float preco;


  printf("Digite o código do produto de 1 a 3:");
  scanf("%d", &codigo);
  
  switch (codigo) {
  case 1:
   printf("Produto selecionado foi camiseta!,");
    preco = 80.00;
   break;

     
  
  case 2:
   printf("Produto selecionado foi calca!,");
    preco = 100.00;
   break;
  
    
  
  case 3:
   printf("Produto selecionado foi sapato!,");
    preco = 200.00;
   break;
  
  
  default:
    break;
  }

  printf("O preço é: %.2f\n", preco);
  return 0;
}
