/*Ler um número inteiro entre 1 e 100. Encontrar a representação deste número na base
dois, usando um vetor. Imprimir o número encontrado.*/
 
#include <stdio.h>
#include <stdlib.h>
#define MAX 20
 
void main()
{
        int x, vetor[MAX],i=0;
       
        printf("Digite um numero em base 10 que eu irei converte-lo para base 2!");
        scanf("%d",&x);
 
        while(x>1)
        {
                printf("%d / 2 =",x);
                vetor[i]=x%2;
                x=x/2;
                printf("%d, com resto %d\n",x,x%2);
                i++;
                if(x==1 || x==0) vetor[i]=x;
        }
 
        while(i>=0)
        {
                printf("%d",vetor[i]);
                i--;
        }
        printf("\n");
        system("pause");
}
