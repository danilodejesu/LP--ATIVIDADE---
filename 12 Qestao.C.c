#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "portuguesse");
    int quantidade;
    int notas;
    int i;
    float media = 0;
    float soma = 0;


    printf("Digite quantidade de notas:");
    scanf("%d",&quantidade);
    
    for (i = 0; i < quantidade; i++){
    printf("Digite  notas:",i+1);
    scanf("%d",&notas);

    soma += + notas;
    }


     
    media = soma / quantidade;

    printf("A média:%.2f",media);

    return 0;
}