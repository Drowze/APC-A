/* Faça um programa para calcular o seguinte somatório:
1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50. */
 
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
        float i,j;
        float soma;
        j=1; soma=0;
 
        for(i=1;i<=50;i++)
        {
                soma=soma+(j/i);
                printf("+ %.0f / %.0f = %.2f\n\n\n",j,i,soma);
                j=j+2;
        }
        printf("\nSoma = %f",soma);
 
        system("pause");
}
