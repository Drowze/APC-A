/*REGRA:  O  usuário  é  quem  irá  determinar  o  tamanho  da  matriz  em  todos  os  exercícios.
Podemos  ter,  no  mínimo,  uma  matriz  1x1  e,  no  máximo,  uma  matriz  10x10.  Você  deverá
consistir os valores de M e N para que esses valores estejam dentro do valor determinado.
 
/*Faça  um  programa  que  leia  uma  matriz  bidimensional  NxM,  em  seguida,  calcule  e
mostre sua transposta.*/
 
#include <stdlib.h>
#include <stdio.h>
#define MAX 10
 
void main(){
        int a[MAX][MAX];
        int i,j,i_max,j_max;
        int aux;
        printf("Quantidade de linhas: ");
        scanf("%d",&i_max);
        printf("Quantidade de colunas: ");
        scanf("%d",&j_max);
 
        for(i=0;i<i_max;i++)
                for(j=0;j<j_max;j++){
                        printf("Digite o valor de A[%d][%d]: ",i+1,j+1);
                        scanf("%d",&a[i][j]);
                }
 
        //Troca de valores (propriedade da matriz transposta)
        for(i=0;i<i_max;i++)
                for(j=0;j<j_max;j++){
                        aux=a[i][j];
                        a[i][j]=a[j][i];
                        a[j][i]=aux;
                }
 
        //imprimir matriz tranposta
        printf("\nMatriz Transposta:\n");
        for(i=0;i<j_max;i++){
                printf("|");
                for(j=0;j<i_max;j++){
                        printf("[%d] ",a[i][j]);
                }
                printf("\b|\n");
        }
 
        system("Pause");
}
