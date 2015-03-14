/*Fazer um programa para concatenar duas strings dadas (não utilizar a função strcat).*/
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void main()
{
        char string1[30], string2[30];
 
        printf("Digite 2 strings que irei concatena-las sem usar strcat:\n");
        gets(string1);
        gets(string2);
 
        printf("%s%s",string1,string2);
       
        system("pause");
}
