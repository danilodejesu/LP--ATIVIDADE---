#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>

int main()
{

    setlocale(LC_ALL, "portuguesse");

    int  numero;  
    float mediaPares = 0;
    float mediaimpares = 0;
    float somapar = 0;
    float somaimPares = 0;
    int contpar = 0;
    int  contimpar = 0;
    
    
    do {
           printf("Digite os número:");
           scanf("%d", &numero);

        if (numero != 0) { 

         if (numero % 2 == 0) {

           contpar++;
           somapar += + numero;
         } else {

            contimpar++;
            somaimPares += + numero;
            
         }
         
        
           
        }

    } while (numero != 0);
                mediaPares = (float) somapar / contpar;
                mediaimpares = (float) somaimPares / contimpar;
 
      //system("cls || clear");
    

    printf("Quantidade de numeros pares: %d \n", contpar);
    printf("media de numeros pares: %.2f \n", mediaPares);
    printf("Quantidade de numeros impares: %d \n", contimpar);
    printf("Media do numeros impares: %.2f \n", mediaimpares);
    

    getchar();
    return 0;
}