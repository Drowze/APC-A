/* Fazer um programa que receba um número e diga se ele é par ou ímpar. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
void main()
{
        int a;
 
        printf("Digite um numero e direi se ele eh par ou impar: ");
        scanf("%d", &a);
 
        if(a%2==0) printf("Eh par\n",a);
        else printf("Eh impar\n");
 
        system("pause");
}
