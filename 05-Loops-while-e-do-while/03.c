/*Escreva um programa que receba vários números e informe quantos números entre
100 e 200 foram digitados. Quando o valor 0 (zero) for lido, o programa deverá cessar
sua execução. */
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
        int a, i;
        i=0; a=0;
        printf("Digite numeros e informarei quantos numeros entre 100 e 200 foram digitados\nPara concluir, digite 0\n");
       
        do
        {
                scanf("%d", a);
                if(a>100 && a<200) i++;
        } while(a!=0);
        printf("Voce digitou %d numeros entre 100 e 200", i);
 
        system("Pause");
}
