/* Faça um programa que calcule a soma dos números divisíveis por 3 entre 1 e 20.*/
 
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
        int i,soma;
        soma=0;
 
        for(int i=1;i<=20;i++)
        {
                if(i%3==0)
                {
                        printf("%d + %d = ",soma,i);
                        soma=soma+i;
                        printf("%d\n",soma);
                }
        }
        printf("\nSoma = %d",soma);
 
        system("pause");
}
