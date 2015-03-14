/*Refazer o exercício proposto porém, agora calcule e escreva na tela a área e o perímetro de
um triângulo, cujos lados são informados pelo usuário. */
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
void main()
{
        float a,b,c;
 
       
        printf("Esse programa calcula a area e o perimetro de um triangulo. Digite suas medidas.\n");
        printf("Lado 1: "); scanf("%f",&a);
        printf("Lado 2: "); scanf("%f",&b);
        printf("Lado 3: "); scanf("%f",&c);
 
        float p = (a+b+c)/2;
        double area = sqrt(p*(p-a)*(p-b)*(p-c));
 
/* Tendo-se que a area de um triangulo é igual a "sqrt(p*(p-a)*(p-b)*(p-c))", considerando sqrt
como raiz quadrada e p como semiperímetro.
 
PROBLEMA: Caso o triangulo não exista, o programa vai retornar o valor 0. Para resolver esse
problema seria necessário utilizar algumas funções if. */
 
        printf("Seu perimetro eh: %f\n", p*2);
        printf("Sua area eh: %f\n", area);
 
        system("Pause");
}
