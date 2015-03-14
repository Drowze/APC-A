/*A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados
sobre o salário e número de filhos. A prefeitura deseja saber:
a.  média do salário da população;
b.  média do número de filhos;
c.  maior salário;
d.  percentual de pessoas com salário até R$250,00.
Desenvolver um programa estruturado para calcular eescrever o que foi pedido nos
itens  a,  b,  c  e  d.  O  final  da  leitura  de  dados  se  dará  com  a  entrada  de  um  salário
negativo.*/
 
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
        float salario=0, sal_total=0, maior_salario=0;
        int filhos=0, filhos_total=0, i=1, i_sal_baixo=0; // i_sal_baixo: pessoas com salario abaixo de R$250,00
 
        printf("Digite um salario negativo para parar a entrada de dados\n\n");
        do
        {
                printf("Digite o salario do habitante %d: R$",i);
                scanf("%f",&salario);
                if(salario>0)
                {
                        printf("Digite o numero de filhos do habitante %d: ",i);
                        scanf("%d",&filhos);
 
                        if(salario>maior_salario) maior_salario = salario;
                        if(salario<250) i_sal_baixo++;
 
                        sal_total = sal_total+salario;
                        filhos_total = filhos_total+filhos;
                        i++;
                }
        }while(salario>=0);
       
        printf("\n---------------------------\n");
        printf("A) Media salarial da populacao: R$%.2f\n",sal_total/(i-1));
        printf("B) Media do numero de filhos: %.2f\n",(float)filhos_total/(i-1));
        printf("C) Maior salario: R$%.2f\n",maior_salario);
        printf("D) Percentual de pessoas com salario ate R$250: %.2f%%",100*(float)i_sal_baixo/(i-1));
        printf("\n---------------------------\n");
 
        system("Pause");
}
