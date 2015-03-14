/*Elaborar um programa para calcular o volume de um sólido na forma de um paralelepípedo
à partir da altura, largura e comprimento a serem lidos. */
 
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
        float altura, largura, comprimento;
       
        printf("Esse programa calcula o volume de um paralelepipedo. Digite suas medidas.\n");
        printf("Altura: "); scanf("%f",&altura);
        printf("Largura: "); scanf("%f",&largura);
        printf("Comprimento: "); scanf("%f",&comprimento);
        printf("Seu volume eh: %f\n", altura*largura*comprimento);
 
        system("Pause");
}
