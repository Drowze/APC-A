/*Escreva um programa que receba números aleatórios do usuário e imprima o triplo de
cada número. O programa deve encerrar quando o número –999 for digitado. */
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
        int num;
        num=0;
        printf("Digite um numero e imprimirei o triplo dele. Digite 999 para cancelar\n");
        while(num!=-999)
        {
                scanf("%d", &num);
                printf ("%d\n", 3*num);
        }
        system("Pause");
}
