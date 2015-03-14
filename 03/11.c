/* Para remover os comentários, digite CTRL-K CTRL-U
 
Faça um programa que simule uma calculadora (com as seguintes operações disponíveis:
soma, subtração, multiplicação, divisão inteira, divisão real, resto da divisão e raiz
quadrada) usando os comandos switch-case e break. Faça a interação com o usuário da
melhor maneira possível para que ele possa entender o que deve fazer para manipular
sua calculadora (veja dicas para o exercício na próxima página).  */
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
void main()
{
        system("color 20");
        int opcao, a, b;
 
        printf("Bem vindo a calculadora. Selecione a opcao que deseja:\n");
        printf("1- Somar\n");
        printf("2- Subtrair\n");
        printf("3- Multiplicar\n");
        printf("4- Dividir\n");
        printf("5- Achar a raiz quadrada\n");
        printf("6- Elevar ao quadrado\n");
        printf("0- Sair\n\n\n");
 
        while("opcao!=0"){
                printf("Opcao: ");
                scanf("%d",&opcao);
                switch(opcao)
                {
                        case 1:         printf("Digite os numeros que deseja somar: ");
                                                scanf("%d %d", &a,&b);
                                                printf("Resultado= %d\n",a+b);
                                                break;
                        case 2:         printf("Digite os numeros que deseja subtrair (em sequencia): ");
                                                scanf("%d %d", &a,&b);
                                                printf("Resultado= %d\n",a-b);
                                                break;
                        case 3:         printf("Digite os numeros que deseja multiplicar: ");
                                                scanf("%d %d", &a,&b);
                                                printf("Resultado= %d\n",a*b);
                                                break;
                        case 4:         printf("Digite os numeros que deseja dividir (em sequencia): ");
                                                scanf("%d %d", &a,&b);
                                                printf("Resultado= %d\n",a/b);
                                                break;
                        case 5:         printf("Digite o numero que deseja achar a raiz quadrada: ");
                                                scanf("%d", &a);
                                                printf("Resultado= %f\n",sqrt((float)a));
                                                break;
                        case 6:         printf("Digite o numero que deseja elevar ao quadrado: ");
                                                scanf("%d", &a);
                                                printf("Resultado= %d\n",a*a);
                                                break;
                        default:        break;
                }
        }
       
        system("pause");
}
