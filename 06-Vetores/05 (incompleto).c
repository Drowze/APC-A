/*Escrever  um  programa  para  ler  dois  vetores  de  inteiros,  de  ordem  n  e  m
respectivamente  (n  <=  15  e  m  <=  25).  Calcular  o  vetor  interseção  dos  dois  vetores
dados,  imprimido  os  três  vetores.  Se  não  houver  a  interseção,  imprimir  uma
mensagem explicativa adequada*/
#include <stdio.h>
#include <stdlib.h>
#define MAX1 3
#define MAX2 5
 
void main()
{
        int a[MAX1], b[MAX2], c[MAX1*MAX2],i,j,siz=0;
 
        printf("Digite %d valores para o vetor A\n",MAX1);
        for (i=0;i<MAX1;i++) scanf("%d",&a[i]);
 
        printf("Digite %d valores para o vetor B\n",MAX2);
        for (i=0;i<MAX2;i++) scanf("%d",&b[i]);
 
        for(i=0;i<MAX1;i++)     for(j=0;j<MAX2;j++) if(a[i]==b[j]){
                c[siz]=a[i];
                printf("size aumentou pois a[%d]=%d = b[%d]=%d, logo c[%d] = %d\n",i,a[i],j,b[j],siz,c[siz]);
                siz++;
        }
 
        if(siz==0) printf("Nao ha interesecao entre os vetores\n");
        else {
                printf("\n\n\nsize = %d\n",siz);
                printf("Vetor C representando a intersecao de A e B:\n");
                for(i=0;i<siz;i++) printf("C[%d]: %d\n",i,c[i]);
        }
        system("Pause");
}
