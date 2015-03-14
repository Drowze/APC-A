/* Fazer um programa que receba um número e diga se ele é maior que 5. */
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
        int n;
 
        printf("Digite um numero e direi se ele eh maior que 5: ");
        scanf("%d", &n);
 
        if(n>5) printf("Eh maior que 5\n"); //se n for maior que 5, executa comando próximo ao if.
        else printf("Eh menor que 5\n"); //se não, executa o comando próximo ao else
 
        system("pause");
}
