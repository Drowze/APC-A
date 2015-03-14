/* Fazer um programa que receba dois números e os imprima em ordem crescente e em
ordem decrescente. */
 
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
        int a,b;
 
        printf("Digite dois numeros e os imprimirei em ordem crescente e decrescente: ");
        scanf("%d", &a);
        scanf("%d", &b);
 
        if(a>b)
                {
                        printf("Ordem crescente = %d %d\n",b,a);
                        printf("Ordem decrescente = %d\n",a,b);
                }
        else if(b>a)
                {
                        printf("Ordem crescente = %d %d\n",a,b);
                        printf("Ordem decrescente = %d %d\n",b,a);
                }
        else printf("sao iguais\n");
 
        system("pause");
}
