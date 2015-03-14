/*
Batalha Naval 1.1
17/Maio/2014
 
1.1: Correção no sistema de dicas
*/
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define FILE 9
#define COLU 9
#define TENTATIVAS 20
 
void main(){
        char mar[FILE][COLU]; //mar vazio
        char resp[FILE][COLU]; //respostas
        int i,j;
        int tent=TENTATIVAS; //contador de balas
        int cont=0,cont_i=0,cont_j=0; //contadores de barcos
        srand(time(NULL)); //muda o seed do aleatorio
 
 
        //Respostas do jogo
        for(i=0;i<FILE;i++){
                for(j=0;j<COLU;j++) {
                        if((rand()+1)%10>7) { //aleatorio de 0 a 10. 30% de chance do espaço ser um barco (linha abaixo)
                                resp[i][j] = '1'; //isso é um barco
                                cont++; //aumentando o contador de barcos
                        }
                        else resp[i][j] = '0'; //isso é um espaço vazio
                }
        }
 
        //Declaracao dos espacos desconhecidos
        for(i=0;i<FILE;i++)
                for(j=0;j<COLU;j++) mar[i][j] = '~';           
       
        //-------------//
 
 
        do{
                cont_i=0; //reset
                cont_j=0; //reset
                //interface principal
                printf("                BATALHA NAVAL\n\n    ");
 
                for(j=0;j<COLU;j++) printf("%d  ",j+1); //numeracao das colunas
 
                for(i=0;i<FILE;i++){
                        printf("\n");
                        printf("%d : ",i+1); //numeracao das fileiras
                        for(j=0;j<COLU;j++) {
                                printf("%c  ",mar[i][j]); //mostra o mar (espacos vazios)
                        }
                }
 
                //verificacoes da entrada do usuario
                printf("\nDeseja atirar em qual espaco?\n");
                do{
                        printf("Linha: "); scanf("%d",&i);
                }while(i<1 && i!=99);
                do{
                        printf("Coluna: "); scanf("%d",&j);
                }while(j>COLU && j!=99);
               
                //verificacao de acerto
                if(i!=99 && j!=99 ){
                        if(mar[i-1][j-1]=='~' && resp[i-1][j-1]=='1'){
                                cont--;
                                printf("BOOM! Barco afundado! %d barcos restantes!\n",cont);
                                mar[i-1][j-1]=resp[i-1][j-1];
                                resp[i-1][j-1]='0'; //essa linha é desnecessaria caso nao queira o bloco extra
                        }
                        else if(mar[i-1][j-1]=='~' && resp[i-1][j-1]=='0'){
                                mar[i-1][j-1]=resp[i-1][j-1];
                                tent--;
                                printf("SPLASH! Voce acertou a agua! %d tentativas restantes!\n",tent);
                        }
                        else if(mar[i-1][j-1]=='0' || mar[i-1][j-1]=='1') printf("Voce ja atirou neste local\n");
                        else printf("Erro\n");
                }
                if(i==99 && j==99){
                        for(i=0;i<FILE;i++){ //CODIGO ULTRA SECRETO
                                printf("\n");
                                for(j=0;j<COLU;j++) printf("%c ",resp[i][j]);
                        }
                        i=99;
                        j=99;
                }
                printf("\n");
               
 
                //BLOCO EXTRA: contador de barcos na linha/coluna
                if(i!=99 && j!=99) {
                        for(j=0;j<COLU;j++) if(resp[i-1][j]=='1') cont_j++;
                        printf("Dica:\nRestam %d barcos nesta linha e ",cont_j);
                        for(i=0;i<FILE;i++) if(resp[i][j-1]=='1') cont_i++;
                        printf("%d barcos nesta coluna\n",cont_i);
                }
 
                system("Pause");
                fflush(stdin); //para evitar erro caso o usuario digite uma letra
                system("cls");
        }while(tent>0 && cont>0);
 
 
 
        printf("\n");
        system("Pause");
}
