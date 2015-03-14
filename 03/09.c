/* Fazer um programa que receba três números e informe:
a. Qual é o maior entre eles;
b. Qual é o menor entre eles;
c. Qual é a média entre eles;
d. Imprima-os em ordem crescente;
e. Imprima-os em ordem decrescente. */
 
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
        int a,b,c;
                float media=0;
 
        printf("Digite tres numeros e darei algumas informacoes: ");
        scanf("%d %d %d", &a,&b,&c);
                media=(((float)a+(float)b+(float)c)/3);
 
        if(a>b && b>c)
                {
                        printf("A) O maior eh %d\n",a);
                        printf("B) O menor eh %d\n",c);
                        printf("C) A media eh %f\n",media);
                        printf("D) Ordem crescente = %d %d %d\n",c,b,a);
                        printf("E) Ordem decrescente = %d %d %d\n",a,b,c);
                }
        else if(a>c && c>b)
                {
                        printf("A) O maior eh %d\n",a);
                        printf("B) O menor eh %d\n",b);
                        printf("C) A media eh %f\n",media);
                        printf("D) Ordem crescente = %d %d %d\n",b,c,a);
                        printf("E) Ordem decrescente = %d %d %d\n",a,c,b);
                }
        else if(b>c && c>a)
                {
                        printf("A) O maior eh %d\n",b);
                        printf("B) O menor eh %d\n",a);
                        printf("C) A media eh %f\n",media);
                        printf("D) Ordem crescente = %d %d %d\n",a,c,b);
                        printf("E) Ordem decrescente = %d %d %d\n",b,c,a);
                }
        else if(b>a && a>c)
                {
                        printf("A) O maior eh %d\n",b);
                        printf("B) O menor eh %d\n",c);
                        printf("C) A media eh %f\n",media);
                        printf("D) Ordem crescente = %d %d %d\n",c,a,b);
                        printf("E) Ordem decrescente = %d %d %d\n",b,a,c);
                }
        else if(c>b && b>a)
                {
                        printf("A) O maior eh %d\n",c);
                        printf("B) O menor eh %d\n",a);
                        printf("C) A media eh %f\n",media);
                        printf("D) Ordem crescente = %d %d %d\n",a,b,c);
                        printf("E) Ordem decrescente = %d %d %d\n",c,b,a);
                }
        else if(c>a && a>b)
                {
                        printf("A) O maior eh %d\n",c);
                        printf("B) O menor eh %d\n",b);
                        printf("C) A media eh %f\n",media);
                        printf("D) Ordem crescente = %d %d %d\n",b,a,c);
                        printf("E) Ordem decrescente = %d %d %d\n",c,a,b);
                }
        else printf("dois ou mais numeros sao iguais\n");
 
        system("pause");
}
