/*Fazer um programa que receba 2 palavras e imprima a quantidade total de vogais de
cada uma delas.*/
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void main()
{
        char string1[15], string2[15];
        int i=0,cont1=0,cont2=0;
 
        printf("Digite duas strings e direi o numero de vogais nelas\n");
        gets(string1);
        gets(string2);
 
        for(i=0;string1[i];i++)
                if(string1[i] == 'a' || string1[i] == 'e' || string1[i] == 'i' || string1[i] == 'o' || string1[i] == 'u') cont1 ++;
 
        for(i=0;string2[i];i++)
                if(string2[i] == 'a' || string2[i] == 'e' || string2[i] == 'i' || string2[i] == 'o' || string2[i] == 'u') cont2 ++;
 
        printf("Numero de vogais da string 1: %d\nNumero de vogais da string 2: %d\n",cont1,cont2);
 
        system("Pause");
}
