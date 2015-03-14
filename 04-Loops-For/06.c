/* Faça um programa que leia três números inteiros: numero, inicio e fim e mostre todos
os números múltiplos de numero entre inicio e fim. Exemplo: numero = 3, inicio = 1,
fim = 10. O programa deverá exibir: 3, 6 e 9. Caso não existam múltiplos no intervalo
informado, exibir mensagem de texto apropriada. Exibir mensagem também no caso
do intervalo ser inválido. */
 
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
        int numero,inicio,fim,contador_de_multiplos;
        contador_de_multiplos=0;
       
        printf("Digite um divisor e um intervado. Encontrarei os numeros divisiveis pelo \ndivisor no intervalo informado.\n");
        printf("Divisor: ");
        scanf("%d",&numero);
        printf("Inicio do intervalo: ");
        scanf("%d",&inicio);
        printf("Fim do intervalo: ");
        scanf("%d",&fim);
       
       
        if(inicio>fim) printf("\nIntervalo invalido"); // Checando se o intervalo é valido
        else printf("\nLista de numeros divisiveis entre por %d entre %d e %d:\n",numero,inicio,fim);
 
        for(inicio;inicio<=fim;inicio++)
        {
                if(inicio%numero==0)
                {
                        printf("%d, ",inicio);
                        contador_de_multiplos++;
                }
        }
       
        if(contador_de_multiplos==0) printf("Nao ha multiplos no intervalo informado\n");
        else printf("\b\b.\n"); // Tirar a virgula do ultimo divisivel.
       
        printf(" \n");
 
        system("pause");
}
