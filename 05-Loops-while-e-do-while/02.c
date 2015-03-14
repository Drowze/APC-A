/*Faça um programa capaz de receber uma quantidade não previamente determinada
de valores positivos. O usuário deve indicar que quer parar de informar valores
digitando um valor especial, por exemplo -1. Calcule o somatório dos valores digitados
pelo usuário. */
 
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
        int i, soma;
        i=0; soma=0;
        printf("Digite os numeros que deseja somar e digite '-1' para parar\n");
        do
        {
                printf("Digite um numero: ");
                scanf("%d", &i);
                if(i>0) soma=soma+i;
        } while(i!=-1);
 
        printf("A soma dos numeros eh %d\n", soma);
        system("Pause");
}
