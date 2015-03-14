/* Fazer um programa que receba um número e escreva o seu valor absoluto, ou seja, o
módulo do número. */
 
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
        int a;
 
        printf("Digite um numero e direi seu modulo: ");
        scanf("%d", &a);
 
        if(a<0) printf("Modulo = %d\n",a*-1);
        else printf("Modulo = %d\n",a);
 
        system("pause");
}
