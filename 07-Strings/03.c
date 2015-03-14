/*Fazer um programa para ler strings e determinar o seu tamanho (não utilizar a função
strlen).*/
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void main()
{
        char string1[30];
        int i,op=0;
 
        do{
                i=0; //desta forma, o programa podera contar palavras pequenas após ler uma grande
                fflush(stdin); //desta forma, o programa não vai considerar "enter" como um caractere
                printf("Digite uma string qualquer que definirei seu tamanho\n");
                gets(string1);
 
                while(string1[i]) i++;
                printf("Tamanho: %d letras\n",i);
               
                printf("Deseja continuar? 1-sim 2-nao\n");
                scanf("%d",&op);
        }while(op!=2);
}
