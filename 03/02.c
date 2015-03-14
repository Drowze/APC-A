/* Fazer um programa que receba um número e diga se ele é menor que 15. */
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
        int n;
 
        printf("Digite um numero e direi se ele eh menor que 15: ");
        scanf("%d", &n);
 
        if(n<15) printf("Eh menor que 15\n"); //se n for menor que 15, executa comando próximo ao if.
        else printf("Eh maior que 15\n"); //se não, executa o comando próximo ao else
 
        system("pause");
}
