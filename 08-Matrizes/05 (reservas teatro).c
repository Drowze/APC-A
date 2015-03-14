/*Num teatro a plateia é constituída por 200 lugares organizados em 10 fileiras com 20
colunas cada. Um lugar nesse teatro é identificado pelo seu número de fileira e seu
número de coluna.  Supondo que em tal teatro há espetáculos de Quarta a Domingo,
um espetáculo por dia, fazer um programa que represente o mapa de reservas numa
semana em tal teatro. Uma vez criada essa representação o programa deverá iniciar a
mesma  de  modo  a  representar  que  todos  os  lugares  encontram-se  disponíveis  para
reservas.
Outras informações:
a)    Não é necessário fazer o controle de reservas. O programa deverá apenas criar
a  estrutura  que  identifique  o  mapa  de  reservas  desse  teatro  de  quarta  a
domingo.
b)  Em  seguida,  basta  inicializar  esse  mapa  indicando  que  os  lugares  estão
disponíveis.  Portanto,  nesse  exercício  não  haverá  recebimento  de  dados  por
parte do usuário e nenhum tipo de cálculo.
c)  Embora  não  seja  necessário,  criar  o  controle  de  reservas,  implementando
consulta de lugares disponíveis e a realização e  cancelamento  da reserva é um
ótimo exercício!*/
 
#include <stdlib.h>
#include <stdio.h>
#define FILE 10
#define COLU 20
 
void main(){
        int ocupado=0; //0: livre, 1: ocupado
        int reservas[5][FILE][COLU]; //5 dias da semana, 10 fileiras, 20 colunas
        int h, i, j; //contadores da matriz
        int op; //operador do menu principal
 
 
        //bloco para deixar todos os assentos vagos em todos os dias da semana
        for(h=0;h<5;h++){
                for(i=0;i<FILE;i++){
                        for(j=0;j<COLU;j++){
                                reservas[h][i][j]=0;
                        }
                }
        }
 
        //bloco principal
        do{
                fflush(stdin);
                printf("Voce deseja checar as reservas de qual dia da semana?\n");
                printf("1- Quarta\n");
                printf("2- Quinta\n");
                printf("3- Sexta\n");
                printf("4- Sabado\n");
                printf("5- Domingo\n");
                printf("0- Sair\n");
                scanf("%d",&op);
 
                system("cls");
       
                switch(op){
                case 0: break;
                case 1: printf("        Quarta feira:\n\n");
                        break;
                case 2: printf("        Quinta feira:\n\n");
                        break;
                case 3: printf("        Sexta feira:\n\n");
                        break;
                case 4: printf("        Sabado:\n\n");
                        break;
                case 5: printf("        Domingo:\n\n");
                        break;
                default: printf("       Opcao invalida\n");
                        system("pause");
                        break;
                }
 
                //Exibe o mapa de reservas
                if(op>0 && op<6){
                        printf("0: livre   X: ocupado\n   ");
 
                        for(h=0;h<COLU/2.3;h++) printf("|||"); //linhas para exibir o palco
                        printf("PALCO"); //linhas para exibir o palco
                        for(h=0;h<COLU/2.3;h++) printf("|||"); //linhas para exibir o palco
                        printf("\n    ");
 
                        for(h=0;h<COLU;h++)
                                if(h<9) printf("%d  ",h+1); //linha para mostrar o numero da coluna
                                else printf("%d ",h+1); //linhas para mostrar o numero da coluna
                        printf("\n");
                       
                        for(i=0;i<FILE;i++){
                                if(i<9) printf("%d : ",i+1); //linhas para mostrar o numero da fileira
                                else printf("%d: ",i+1); //linhas para mostrar o numero da fileira
                                for(j=0;j<COLU;j++)
                                        if(reservas[op-1][i][j]==0)     printf("0  ");
                                        else printf("X  ");
                                printf("\n");
                        }
               
               
                        printf("\n\nDeseja fazer uma reserva ou cancelamento?\n1- Reserva\n2- Cancelamento\nOutro- Nao\n");
                        scanf("%d", &h);
                        if(h==1){
                                printf("Fileira desejada: ");
                                scanf("%d",&i);
                                printf("Coluna desejada: ");
                                scanf("%d",&j);
                                if(reservas[op-1][i-1][j-1]==1) printf("ERRO: Lugar ja reservado\n");
                                else if(i>10 || j>20 || i<=0 || j<=0) printf("ERRO: Fileira invalida\n");
                                else{
                                        reservas[op-1][i-1][j-1]=1;
                                        printf("Reserva feita com sucesso!\n");
                                }
                                system("Pause");
                        }
                        else if(h==2){
                                printf("Fileira desejada: ");
                                scanf("%d",&i);
                                printf("Coluna desejada: ");
                                scanf("%d",&j);
                                if(reservas[op-1][i-1][j-1]==0) printf("ERRO: Lugar nao possui reserva\n");
                                else if(i>10 || j>20 || i<=0 || j<=0) printf("ERRO: Fileira invalida\n");
                                else{
                                        reservas[op-1][i-1][j-1]=0;
                                        printf("Cancelamento feito com sucesso!\n");
                                }
                                system("Pause");
                        }
                        else{
                                printf("Deseja continuar executando o programa?\n0- Nao\n");
                                scanf("%d",&op);
                        }
                }
 
 
                system("cls");
        }while(op!=0);
 
}
