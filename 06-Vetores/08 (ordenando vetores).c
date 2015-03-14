/*Escrever um programa para ler um vetor de “n” elementos do tipo inteiro (n <= 20) e
ordenar  seus  elementos  em  ordem  decrescente.  Imprimir  o  vetor  antes  e  após  a
ordenação..*/
 
#include <stdio.h>
#include <stdlib.h>
#define MAX 20
 
void main()
{
        int a[MAX], aux, i=0,j=0;
 
        printf("Digite n elementos para o vetor A (n<=%d)\n(Para cancelar, digite um numero maior que %d\n\n",MAX,MAX);
        do{
                scanf("%d",&a[i]);
                if(a[i]<=MAX) i++;
        }while(i<=MAX);
 
        //for(i=0;i<MAX;i++) a[i]=rand()%100; //(pra quando estiver com preguiça de preencher o vetor haha)
       
        printf("Vetor digitado (antes de ser ordenado):\n");
        for(i=0;i<MAX;i++) printf("a[%d] = %d\n",i+1,a[i]);
 
        /*"Core" do programa. Pense assim, voce começa em i e compara com os nºs seguintes.
        Voce nao precisa comparar i com i, pois são o mesmo numero.
        Seguindo esse raciocinio, i nao precisa ir até o final, mas o penultimo valor tem que checar com o ultimo.
        Logo, i começa em 0, mas j começa em i+1. Ainda, i vai até MAX-1, mas j vai até MAX.*/
 
        for(i=0;i<MAX-1;i++) for(j=i+1;j<MAX;j++) if(a[i]<a[j]){
                                aux=a[i];
                                a[i]=a[j];
                                a[j]=aux;
                }
       
        printf("Vetor digitado (apos ser reordenado):\n");
        for(i=0;i<MAX;i++) printf("A[%d] = %d\n",i+1,a[i]);
 
        system("pause");
}
