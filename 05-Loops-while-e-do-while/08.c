a/*Escreva um programa que funciona como uma calculadora. O programa deve exibir um
menu perguntando ao usuário que operação deseja realizar: “+” para soma, “-” para
subtração, “*” para multiplicação e “/” para divisão. Após ler a opção escolhida pelo
usuário  seu  programa  deve  ler  dois  números  e  realizar  a  operação  anteriormente
selecionada.  Por  fim,  o  programa  deve  perguntar  se  o  usuário  deseja  continuar,
oferecendo as opções “S” para Sim e “N” para Não. . */
 
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
        int n1, n2;
        char op='+', continuar='s';
       
        do{
                fflush(stdin);
                printf("BEM VINDO A CALCULADORA GIBA2014 V1.0");
                printf("\nESCOLHA A OPCAO DESEJADA DO MENU ABAIXO:\n\n");
 
                printf("+ : Soma\n");
                printf("- : Subtracao\n");
                printf("* : Multiplicacao\n");
                printf("/ : Divisao\n");
 
                printf("Opcao: ");
                scanf("%c",&op);
               
                switch(op) //COMEÇO DO SWITCH
                {
                case '+': printf("Digite o numero 1 e o numero 2: ");
                                scanf("%d %d",&n1,&n2);
                                printf("Resultado: %d\n\n",n1+n2);
                                break;
                case '-': printf("Digite o numero 1 e o numero 2: ");
                                scanf("%d %d",&n1,&n2);
                                printf("Resultado: %d\n\n",n1-n2);
                                break;
                case '*': printf("Digite o numero 1 e o numero 2: ");
                                scanf("%d %d",&n1,&n2);
                                printf("Resultado: %d\n\n",n1*n2);
                                break;
                case '/': printf("Digite o numero 1 e o numero 2 (dividendo depois divisor): ");
                                scanf("%d %d",&n1,&n2);
                                printf("Resultado: %f\n\n",(float)n1/n2);
                                break;
                default: printf("ERRO: OPCAO INVALIDA");
                                break;
                } //FIM DO SWITCH
               
               
                printf("\n\nPretende continuar?\ns:sim\nn:nao\n");
                do{
                        fflush(stdin);
                        scanf("%c",&continuar);
                        if(continuar != 's' && continuar !='S' && continuar!='n' && continuar!='N') printf("opcao invalida\n");
                        else system("cls");
                }while(continuar != 's' && continuar !='S' && continuar!='n' && continuar!='N');
               
       
        }while(continuar!='n' && continuar!='N');
}
