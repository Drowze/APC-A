/*Ler um número inteiro entre 1 e 100. Encontrar a representação deste número na base
dois, usando um vetor. Imprimir o número encontrado.*/
 
#include <stdio.h>
#include <stdlib.h>
#define MAX 20
 
void main()
{
        int a[MAX], b[MAX], c[MAX],i=0,j=0;
 
        printf("Digite %d valores para o vetor A:\n",MAX);
        for(i=0;i<MAX;i++) scanf("%d",&a[i]);
 
//Dividindo em dois vetores (blocos: reconhecimento, vetor b, vetor c)
        printf("O vetor A sera divido em duas partes.\nEscolha o tamanho da primeira parte: ");
        do{
                scanf("%d",&j);
                if(j>MAX || j<=0) printf("Valor invalido");
        }while(j>MAX || j<=0);
 
//vetor b
        for(i=0;i<j;i++) b[i]=a[i];
//vetor c (explicacao: http://imgur.com/ICTu27o)
        for(i=0;i<(MAX-j);i++) c[i]=a[i+j];
 
//Imprimindo os vetores
        for(i=0;i<MAX;i++) printf("A[%d]: %d\n",i+1,a[i]);
        for(i=0;i<j;i++) printf("B[%d]: %d\n",i+1,b[i]);
        for(i=0;i<(MAX-j);i++) printf("C[%d]: %d\n",i+1,c[i]);
 
        system("Pause");
}
