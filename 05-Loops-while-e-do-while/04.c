/*Chico tem 1,50m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e cresce 3
centímetros por ano. Construir um programa que calcule e imprima quantos anos
serão necessários para que Juca seja maior que Chico.*/
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
        float chico, juca;
        int anos;
        chico=1.50; juca=1.10; anos=0;
        printf("Chico tem 1.50 metros e Juca tem 1.10 metros. \nChico cresce 0.02cm por ano e juca 0.03cm\n\n");
 
        while (chico>juca)
        {
                chico=chico+0.02;
                juca=juca+0.03;
                anos++;
        }
        printf("Serao necessarios %d anos para que Juca seja maior que Chico\n", anos);
       
        system("Pause");
}
