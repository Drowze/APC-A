/* Faça um programa que receba dois números inteiros e calcule a tabuado do primeiro
número do 1 até o número o segundo número informado. Exemplo: numero1 = 12 e
numero2 = 3. O programa deve exibir:
12 x 1 = 12
12 x 2 = 24
12 x 3 = 36.*/
 
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
        int a,b;
 
        printf("Insira A e B e calcularei a tabuada do numero A ate o numero B.\nA: ");
        scanf("%d",&a);
        printf("B: ");
        scanf("%d",&b);
 
        for(int i=1;i<=b;i++) printf("%d x %d = %d\n",a,i,a*i);
 
        system("pause");
}
