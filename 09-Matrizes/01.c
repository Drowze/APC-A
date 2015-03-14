/*REGRA:  O  usuário  é  quem  irá  determinar  o  tamanho  da  matriz  em  todos  os  exercícios.
Podemos  ter,  no  mínimo,  uma  matriz  1x1  e,  no  máximo,  uma  matriz  10x10.  Você  deverá
consistir os valores de M e N para que esses valores estejam dentro do valor determinado.*/
 
/*Fazer um programa que leia uma matriz MxN (de acordo com a regra acima) e imprima
o maior valor encontrado na matriz.*/
 
 
#include <stdlib.h>
#include <stdio.h>
#define MAX 10
 
void main(){
        int a[MAX][MAX];
        int i,j,i_max,j_max, maior=-99999;
        printf("Quantidade de linhas: ");
        scanf("%d",&i_max);
        printf("Quantidade de colunas: ");
        scanf("%d",&j_max);
 
        printf("\n");
 
        for(i=0;i<i_max;i++)
                for(j=0;j<j_max;j++){
                        printf("Digite o valor de A[%d][%d]: ",i+1,j+1);
                        scanf("%d",&a[i][j]);
                        if(a[i][j]>maior) maior = a[i][j];
                }
 
        printf("\nO maior valor eh: %d\n",maior);
 
        system("Pause");
}
