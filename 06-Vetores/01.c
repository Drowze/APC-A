/*Faça um programa capaz de ler 100 valores e armazená-los em um vetor A. Depois ler
mais  outros  100  valores  e  armazená-los  em  um  vetor  B.  Faça  com  que  um  vetor  C
armazene a soma dos vetores A e B. O primeiro elemento do vetor C deve armazenar a
soma  do  primeiro  elemento  do  vetor  A  com  o  primeiro  elemento  do  vetor  B.  O
segundo elemento do vetor C deve armazenar a soma do segundo elemento do vetor
A com o segundo elemento do vetor B. E assim por diante.*/
 
#include <stdio.h>
#include <stdlib.h>
#define MAX 5 //altere aqui para o numero de valores desejado
 
void main()
{
        int a[MAX], b[MAX], c[MAX];
 
        printf("Digite %d valores para o vetor A:\n",MAX);
       
        for(int i=0; i<MAX; i++)
        {
                printf("Digite o valor A[%d]: ",i+1);
                scanf("%d", &a[i]);
        }
 
        printf("\nDigite %d valores para o vetor B:\n",MAX);
 
        for(int i=0; i<MAX; i++)
        {
                printf("Digite o valor B[%d]: ",i+1);
                scanf("%d", &b[i]);
        }
 
        printf("\nO vetor C representa a soma dos valores do vetor A e B:\n");
 
        for(int i=0;i<MAX;i++)
        {
                c[i]=a[i]+b[i];
                printf("C[%d]: %d\n",i+1,c[i]);
        }
 
        system("Pause");
}
