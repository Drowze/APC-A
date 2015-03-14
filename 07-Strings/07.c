/*Faça um programa que leia uma string da entrada e determine a quantidade de dígitos
numéricos presentes no mesmo. Dígito numérico é qualquer elemento que pertença
ao conjunto: {‘0’,’1’,’2’,’3’,’4’,’5’,’6’,’7’,’8’,’9’}.*/
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void main()
{
        char string1[150];
        int i=0,cont=0;
 
        printf("Digite uma string qualquer e irei contar a quantidade de numeros nela\n");
        gets(string1);
 
        for(i=0;string1[i];i++)
                if(string1[i] == '0' || string1[i] == '1' || string1[i] == '2' || string1[i] == '3' || string1[i] == '4' || string1[i] == '5' || string1[i] == '6' || string1[i] == '7' ||  string1[i] == '8' || string1[i] == '9') cont++;
 
        printf("Quantidade de numeros na string: %d\n",cont);
 
        system("Pause");
}
