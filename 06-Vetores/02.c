/*Faça  um  programa  capaz  de  ler  em  um  vetor  A  um  número  não  previamente
determinado  de  valores  inteiros  positivos.  Esses  valores  devem  ser  fornecidos  pelo
usuário até que ele entre um valor especial. Depois de ler esses valores, copie-os para
um  outro  vetor  B.  Essa  cópia  deve  ser  feita  de  forma  que  o  valor  armazenado  no
primeiro  elemento  do  vetor  A  seja  copiado  para  o  último  elemento  do  vetor  B.  O
segundo elemento do vetor A seja copiado para o penúltimo elemento do vetor B. E
assim por diante.*/
 
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
 
void main()
{
        int a[MAX], b[MAX], i=0, j=0;
 
        printf("Para cancelar a entrada de valores, digite 0\n");
 
        do
        {
                printf("Digite o valor %d: ",i+1);
                scanf("%d",&a[i]);
                if(a[i]!=0) i++;
        }while(a[i]!=0);
 
        for(i; i>=0; i--, j++)
        {
                b[i]=a[j];
                printf("a[%d]=%d e b[%d]=%d\n",j+1,a[j],i+1,b[i]);
        }
        system("Pause");
}
