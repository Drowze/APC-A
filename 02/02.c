/* Fazer um programa que receba dois números, calcule e escreva na tela a soma, a
multiplicação, a divisão e a subtração desses números. */
 
 
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
        int hora, minuto, segundo;
        printf("Indique as horas, minutos e segundos e lhe direi quantos segundos se passaram\ndesde as 00 horas.\n");
 
        printf("Horas = ");
        scanf("%d", &hora);
        printf("Minutos = ");
        scanf("%d", &minuto);
        printf("Segundos = ");
        scanf("%d", &segundo);
 
        /*Ponto chave de resolução do problema: tendo 3 variáveis distintas, podemos usar
        operações distintas com elas e as somar utilizando somente um printf. No caso,
        para a resolução desse problemas, usamos a equação (horas*60*60) + (minutos*60) + (segundos) */
 
        printf("Passaram %d segundos desde as 00 horas", hora*60*60+minuto*60+segundo);
        system("Pause");
}
