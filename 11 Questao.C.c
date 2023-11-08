#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>

int main(){

  setlocale(LC_ALL, "portuguese");

  int codigo;

  do {

    printf("Digite o código de acesso:");
    scanf("%d", &codigo);


  } while (codigo != 123456);
  
    printf("Acesso permitido!\n");
    return 0;
  
}

