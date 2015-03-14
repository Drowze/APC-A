/*Fazer  um  programa  que  leia  uma  string  e  gere  o  seu  inverso.  Por  exemplo,  se  for
informada  a  string  ANTONIO,  o  programa  deverá  gerar  a  string  OINOTNA.  Exibir  a
string original e a string invertido.*/
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void main()
{
        char string1[150];
        int i=0,j=0;
 
        printf("Digite uma frase que imprimirei cada palavra em uma linha\n");
        gets(string1);
 
        for(i=0;string1[i];i++)
        {
                if(string1[i]==' ') printf("\n");
                else printf("%c",string1[i]);
        }
        printf("\n");
        system("pause");
}
