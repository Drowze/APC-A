/*Fazer um programa que receba 2 palavras (utilizar as funções da string.h) e:
a.  Concatene-as;
b.  Imprima em ordem alfabética;
c.  Verifique se são iguais.*/
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void main()
{
        char string1[30], string2[30], slave[30];
 
        printf("Digite a string1 e 2\nstring1: ");
        gets(string1);
        printf("string2: ");
        gets(string2);
 
        strcpy(slave,string1);
        strcat(slave,string2);
        printf("A) %s\n",slave);
 
        printf("B) Alfabeticamente: ");
        if(strcmp(string1,string2)==0) printf("sao iguais\n");
        else if(strcmp(string1,string2) < 0) printf("%s, %s\n",string1,string2);
        else printf("%s, %s\n",string2, string1);
 
        printf("C) Sao iguais: ");
        if(strcmp(string1,string2)==0) printf("sim\n");
        else printf("nao\n");
 
        system("Pause");
}
