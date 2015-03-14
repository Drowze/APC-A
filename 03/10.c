/* Faça um programa que solicite o ano de casamento, o ano atual e escreva as seguintes
mensagens, para os seguintes casos: 25 anos – “Bodas de Prata”; 50 anos – “Bodas de
Ouro” e 75 anos – “Bodas de Diamante”. Nos casos restantes escrever apenas o número
de anos de casados. Utilize o comando switch-case.  */
 
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
        int casa, ano, bodas;
        printf("Digite o ano de seu casamento: ");
        scanf("%d", &casa);
        printf("Digite em que ano estamos: ");
        scanf("%d", &ano);
       
        bodas=ano-casa;
 
        switch(bodas)
        {
                case 75:        printf("75 anos: Bodas de diamante\n");
                                break;
                case 50:        printf("50 anos: Bodas de ouro\n");
                                break;
                case 25:        printf("25 anos: Bodas de prata\n");
                                break;
                default:        printf("%d anos casados.\n", bodas);
                                break;
        }
               
        system("pause");
}
