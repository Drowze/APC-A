/*
Jogo da Velha 1.0
18/Maio/2014
 
*/
 
#include <stdlib.h>
#include <stdio.h>
#define MAX 3
 
void main(){
        char mtz[MAX][MAX];
        int i,j;
        int turn=0, winner=0; //contador de turnos e indicador de vitoria (finalizam o do-while)
        int x=0; //variavel que decide de qual jogador é a vez
 
        //preencher o tabuleiro com campos vazios
        for(i=0;i<MAX;i++)
                for(j=0;j<MAX;j++)
                        mtz[i][j]=' ';
 
        //-------------------//
 
        do{
                printf("Jogo da Velha\n");
                for(i=0;i<MAX;i++){
                        printf("\n");
                        for(j=0;j<MAX;j++)
                                printf("[%c]",mtz[i][j]);
                }
 
                if(x%2==0){
                        printf("\nJogador 1 (x):\nLinha: ");
                        scanf("%d",&i);
                        printf("Coluna: ");
                        scanf("%d",&j);
                        if(mtz[i-1][j-1]==' '){
                                mtz[i-1][j-1]='X';
                                x++; //Terminou a vez do jogador
                        }
                        else printf("Erro");
                }
                else{
                        printf("\nJogador 2 (o):\nLinha: ");
                        scanf("%d",&i);
                        printf("Coluna: ");
                        scanf("%d",&j);
                        if(mtz[i-1][j-1]==' '){
                                mtz[i-1][j-1]='O';
                                x++; //Terminou a vez do jogador
                        }
                        else printf("Erro");
                }
 
                //possibilidades de vitória
                if((mtz[0][0]==mtz[0][1] && mtz[0][1]==mtz[0][2] && mtz[0][2]!=' ')     //possibildades horizontais
                        || (mtz[1][0]==mtz[1][1] && mtz[1][1]==mtz[1][2] && mtz[1][2]!=' ')
                        || (mtz[2][0]==mtz[2][1] && mtz[2][1]==mtz[2][2] && mtz[2][2]!=' ')
                        || (mtz[0][0]==mtz[1][0] && mtz[1][0]==mtz[2][0] && mtz[2][0]!=' ') //possibilidades verticais
                        || (mtz[0][1]==mtz[1][1] && mtz[1][1]==mtz[2][1] && mtz[2][1]!=' ')
                        || (mtz[0][2]==mtz[1][2] && mtz[1][2]==mtz[2][2] && mtz[2][2]!=' ')
 
                        || (mtz[0][0]==mtz[1][1] && mtz[1][1]==mtz[2][2] && mtz[2][2]!=' ') //possibilidades diagonais
                        || (mtz[0][2]==mtz[1][1] && mtz[1][1]==mtz[2][0] && mtz[2][0]!=' '))
                {
                        if(x%2==1) winner=1;
                        else winner=2;
                }
 
                turn++;
                system("Pause");
                system("cls");
        }while(winner==0 && turn<9);
 
        if (winner != 0) printf("Jogador %d foi o vencedor!",winner);
        else printf("Empate!");
        for(i=0;i<MAX;i++){
                printf("\n");
                for(j=0;j<MAX;j++)
                        printf("[%c]",mtz[i][j]);
                }
 
 
        printf("\n\n");
        system("Pause");
}
