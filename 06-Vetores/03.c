/*Faça um algoritmo e um programa que leia 500 números reais do teclado e armazene
em um vetor. Encontre e imprima o menor e o maior valor do vetor..*/
 
#include <stdio.h>
#include <stdlib.h>
#define MAX 5
 
void main()
{
        int i=0, n[MAX], maior=-999999, menor=9999999;
 
        printf("Digite %d numeros e direi o maior e o menor dentre eles\n", MAX);
 
        for(i=0; i<MAX; i++)
        {
                printf("Digite o numero %d: ", i+1);
                scanf("%d",&n[i]);
                if(n[i]>maior) maior = n[i];
                if(n[i]<menor) menor = n[i];
        }
 
        printf("Maior numero = %d\n",maior);
        printf("Menor numero  = %d\n",menor);
 
        system("Pause");
}
