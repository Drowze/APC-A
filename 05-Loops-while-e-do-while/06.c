/*Escreva um programa que receba a idade de várias pessoas e pare a execução com a
entrada de um número não positivo. O algoritmo deve imprimir:
- O total de pessoas com menos de 21 anos;
- O total de pessoas com mais de 50 anos. */
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
        printf("Digite a idade de varias pessoas e imprimirei\na) O numero de pessoas com menos de 21 anos\nb) O numero de pessoas com mais de 50 anos\n\nPara parar a entrada, digite um numero negativo\n");
        int idade, i1, i2;
        i1=0; i2=0; idade=0;
       
        while(idade>=0)
        {
                printf("Idade: ");
                scanf("%d", &idade);
                if(idade<21 && idade>0) i1++;
                else if (idade>50) i2++;
        }
 
        printf("\nExistem %d pessoas com menos de 21 anos", i1);
        printf("\nExistem %d pessoas com mais de 50 anos", i2);
 
        system("Pause");
}
