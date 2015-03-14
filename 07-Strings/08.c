/*Faça  um  programa  que  receba  uma  sequência  de  caracteres  e  as  ordene  dentro  do
vetor. Ao final, imprima o vetor ordenado.*/
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 15
 
void main()
{
        char string[MAX],aux;
        int i=0,j=0;
 
        printf("Digite uma string e ordenarei suas letras alfabeticamente\n");
        gets(string);
 
        for(i=0;string[i];i++) for(j=i+1;string[j];j++) if(string[i]>string[j]){
                aux=string[i];
                string[i]=string[j];
                string[j]=aux;
        }
 
        printf("%s",string);
 
        system("Pause");
}
