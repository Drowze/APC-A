/*Faça um programa para ler um número inteiro n e, se for possível, calcular o seu
fatorial. Seja n um inteiro positivo. Fatorial de n, representado por n!, é definido por:
• 0! = 1, por definição;
• n! = n * (n-1) * (n-2) * ... * 2 * 1. */
 
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
        int n;
        long long fato;
        fato=1;
 
        printf("Digite um numero e calcularei o seu fatorial: ");
        scanf("%d",&n);
        for(n;n>=1;n--)
        {
                printf("%lld*%d = ",fato,n);
                fato = fato*n;
                printf("%lld\n",fato);
        }
        printf("fatorial = %lld\n",fato);
        system("pause");
}
