/*A conversão de graus Farenheit para centígrados é obtida por C = 5/9 × (F - 32). Faça
um programa que calcule e escreva uma tabela de conversão de graus Farenheit para
centígrados. A tabela deve variar de 50°F até 150°F, de 1°F em 1°F.  */
 
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
        float i, c;
 
        for(i=1;i<=50;i++)
        {
                c=(i-32)*5/9;
                printf("Graus F: %.0f | Graus C: %.2f\n",i,c);
        }
 
        system("pause");
}
