/* Fazer um programa que receba dois números e imprima o maior (pense na possibilidade
dos números serem iguais). */
 
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
        int a,b;
 
        printf("Digite dois numeros e direi qual eh o maior: ");
        scanf("%d", &a);
        scanf("%d", &b);
 
        if(a>b) printf("Maior = %d\n",a);
        else if(b>a) printf("maior = %d\n",b);
        else printf("sao iguais\n");
 
        system("pause");
}
