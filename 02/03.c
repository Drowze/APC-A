/*Faça um programa para o cálculo do valor da expressão: (a + b) / (c + d) onde a, b, c e d são
inteiros quaisquer. */
 
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
        float a,b,c,d;
        printf("Digite 4 numeros quaisquer e exibirei (a + b) / (c + d)\n");
 
        scanf("%d %d %d %d",&a,&b,&c,&d);
        float resultado=(a+b)/(c+d);
        printf("Resultado: %f\n", resultado);
        system("Pause");
}
