/*Escreva um programa que receba números e imprima o quadrado de cada número até
entrar um número múltiplo de 6 que deverá ter seu quadrado também exibido.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
void main()
{
        int a, b;
        a=0; b=0;
        printf("Digite numeros e eu imprimirei o quadrado deles\nQuando houver um multiplo de 6, irei parar a execucao (mas exibirei ele tambem)\n");
 
        do
        {
                printf("Numero = ");
                scanf("%d", &a);
                printf("Quadrado = %d\n", a*a);
        } while(a%6!=0);
       
        system("pause");
}
