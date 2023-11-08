#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float temperatura;

    printf("Digite a temperatura externa:");
    scanf("%f", &temperatura);

    if (temperatura > 25)
    {
       printf("Clima ensoralado");

    } else if (temperatura < 15)
    {
    
       printf("Clima chuvoso");

    } else if (temperatura)

    {
      printf("Clima será nublado!");
   
    }
    
    
    

 

        return 0;
}
