/*Ler três vetores de n elementos cada um (n <= 30) organizados da seguinte forma:
a.  O primeiro e o terceiro são vetores de elementos reais;
b.  O segundo vetor é de caracteres e deve conter os símbolos que representam
as operações aritméticas básicas ( *, /, +, -).
O  primeiro  e  o  terceiro  vetor  serão  operados  aritmeticamente  de  acordo  com  as
operações existentes no segundo vetor, criando um novo vetor com o resultado dessas
operações. Ao final, imprimir os quatro vetores.
Exemplo:
A = (1, 3, 5, 7, 9)  B = ('*', '/', '-', '+', '*')   C = (-2, 4, -5, 3, 6)
D = (-2, 0.75, 10, 10, 54) ( elementos do vetor A operados com elementos do vetor B)*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 30
 
void main()
{
        int a[MAX],c[MAX],i=0,j;
        float d[MAX];
        char b[MAX];
 
        b[0]='+'; b[1]='-'; b[2]='*'; b[3]='/';
        printf("Conteudo do vetor B: %c %c %c %c\n\n", b[0],b[1],b[2],b[3]);
 
        printf("Digite ate %d numeros (0 para parar)\n",MAX);
        do
        {
                scanf("%d",&a[i]);
                if(a[i]!=0) i++;
        }while(a[i]!=0 && i<=29);
 
        printf("Digite exatamente %d numeros\n",i);
        j=i;
        for(i=0;i<j;i++) scanf("%d",&c[i]);
 
        for(i=0;i<j;i++)
        {
                switch(i%4){
                        case 0: d[i]=a[i]+c[i];
                                printf("%d + %d = %.0f\n",a[i],c[i],d[i]);
                                break;
                        case 1: d[i]=a[i]-c[i];
                                printf("%d - %d = %.0f\n",a[i],c[i],d[i]);
                                break;
                        case 2: d[i]=a[i]*c[i];
                                printf("%d * %d = %.0f\n",a[i],c[i],d[i]);
                                break;
                        case 3: d[i]=(float)a[i]/c[i];
                                printf("%d / %d = %.2f\n",a[i],c[i],d[i]);
                                break;
                        default: printf("ERRO\n");
                }
        }
        system("Pause");
}
