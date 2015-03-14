/* Fazer um programa que receba três números e imprima apenas os menores que 3. */
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
        int a,b,c;
 
        printf("Digite tres numeros e exibirei os numeros menores que 3: ");
        scanf("%d %d %d", &a,&b,&c);
 
        printf("Os menores que 3 sao: ");
        if(a<3) printf("%d ",a);
        if(b<3) printf("%d ",b);
        if(c<3) printf("%d\n",c);
 
        system("pause");
}
