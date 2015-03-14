/* Faça um programa para ler 10 inteiros do teclado e, para cada inteiro introduzido,
dizer se o mesmo é par ou ímpar. */
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
void main()
{
        int i, a;
 
        for(i=1;i<=10;i++)
        {
                printf("Digite um numero inteiro e direi se eh par: ");
                scanf("%d",&a);
                if(a%2==0) printf("Par\n");
                else printf("Impar\n");
        }
 
        system("pause");
}
