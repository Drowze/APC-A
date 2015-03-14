/*Desenvolver um programa que leia um número não determinado de valores e calcule e
escreva  a  média  aritmética  dos  valores  lidos,  a  quantidade  de  valores  positivos,  a
quantidade de valores negativos e o percentual de valores negativos e positivos. .*/
 
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
        int valor=0, soma=0, positivos=0, negativos=0;
 
        printf("Digite um numero nao determinado de valores inteiros. \nPara cancelar a entrada, digite 0\n");
        do
        {
                printf("Valor: ");
                scanf("%d",&valor);
                if(valor!=0)
                {
                        soma = soma+valor;
                        if(valor>0) positivos++;
                        else negativos++;
                }
        }while(valor!=0);
 
        printf("\n-----------------\n");
        printf("Media aritmetica: %.f\n",(float)soma/(positivos+negativos));
        printf("Quantidade de valores positivos: %d\n", positivos);
        printf("Quantidade de valores negativos: %d\n", negativos);
        printf("Porcentagem de numeros positivos: %.2f%%\n",100*(float)positivos/(positivos+negativos));
        printf("Porcentagem de numeros negativos: %.2f%%",100*(float)negativos/(positivos+negativos));
        printf("\n-----------------\n");
 
        system("pause");
}
