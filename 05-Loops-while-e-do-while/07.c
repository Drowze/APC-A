/*Escreva um programa que lê idades de pessoas, até que seja digitada uma idade igual a
-1, e exibe qual foi a maior e a menor idade digitada. */
 
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
        int idade=0, menor=9999, maior=0, i=1;
        printf("Digite as idades a serem comparadas ou digite -1 para parar o programa\n");
       
        do{
                printf("Digite a idade da pessoa %d: ", i);
                scanf("%d",&idade);
               
                if(idade>maior) maior = idade;
                if(idade<menor && idade>0) menor = idade;
               
                i++;
        }while(idade!=-1);
 
        printf("\nA menor idade eh %d\n",menor);
        printf("A maior idade eh %d\n",maior);
 
        system("pause");
}
