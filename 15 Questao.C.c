#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>

int main(){

  setlocale(LC_ALL, "portuguese");  
int codigo;
float fh = 0;
float km = 0;
float milhas = 0;
float celsius = 0;



do {
    printf(" Escolha código:\n");
    printf("========Medidas=======\n");
    printf("1: km para milhas\n");
    printf("2: Fh para celsius\n");
    scanf("%d",&codigo);

 switch (codigo) {

 case 1:
    printf("Digite os km:");
    scanf("%f", &km); 

    milhas = km *0.621371;

    printf("Milhas: %f \n",milhas);
    break;

     case 2:
    printf("Digite os graus celsius:");
    scanf("%f", &celsius); 

    fh = (celsius*9/5) + 32;

    printf("Graus celsius: %f \n",fh);

   // default:
   // printf("Opção inválida");
    //break;
 }

} while (codigo != 0);


  return 0;
}
