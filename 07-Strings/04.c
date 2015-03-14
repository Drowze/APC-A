/*Fazer  um  programa  que  leia  uma  string  e  gere  o  seu  inverso.  Por  exemplo,  se  for
informada  a  string  ANTONIO,  o  programa  deverá  gerar  a  string  OINOTNA.  Exibir  a
string original e a string invertido.*/
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void main()
{
        char string1[15], string2[15];
        int i=0,j=0;
 
        printf("Digite uma string e mostrarei seu inverso\n");
        gets(string1);
        j=strlen(string1)-1; // se voce não colocar o -1, vai dar erro pois...
 
        for(i=0;string1[i];i++)
        {
                string2[i]=string1[j]; //...o primeiro caractere a ser copiado sera um /0...
                j--;
        }
        string2[i]='\0';
 
        printf("%s\n",string2);//...logo a string ficara um /0 no índice 0 e não será impressa
       
 
        system("pause");
}
