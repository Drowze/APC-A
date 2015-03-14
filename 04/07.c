/*Faça um programa para determinar o valor do somatório dos primeiros 100 números
inteiros positivos. */
 
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
        int i, soma;
        soma=0;
 
        printf("Somatorio dos 100 primeiros numeros positivos: \n");
        for(i=1;i<=100;i++){
                soma=soma+i;
                printf("%d+",i);
        }
        printf("\b = %d\n",soma);
        system("pause");
}
