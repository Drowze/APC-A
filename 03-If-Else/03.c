/* Fazer um programa que receba dois números e imprima na tela apenas os maiores que 10. */
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
        int a,b;
 
        printf("Digite dois numeros e exibirei os numeros maiores que 10: ");
        scanf("%d %d", &a,&b);
 
        printf("Os maiores que 10 sao: ");
        if(a>10) printf("%d ",a);
        if(b>10) printf("%d\n",b);
 
        system("pause");
}
