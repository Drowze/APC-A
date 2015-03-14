/*
Jogo: Olho da Tempestade
Versao: 1.0
Por: Rafael Gibim
*/
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 9
 
#define CIMA 24
#define BAIXO 25
#define DIREITA 26
#define ESQUERDA 27
 
#define TENTATIVAS 10
 
int main()
{
        int win = 0; // 0: não definido, 1: vitória, 2: derrota
        int tentativas = TENTATIVAS;
        int random1;
        int i, j;
        int diferenca_i, diferenca_j;
        char mtz[MAX][MAX], mtz_nula[MAX][MAX]; //mtz = matriz solução, mtz_nula = matriz impressa para o usuário final
        char codigo;
        srand(time(NULL));
 
 
 
        //Escolhendo a resposta
        int i_resposta = rand()%MAX;
        int j_resposta = rand()%MAX;
        mtz[i_resposta][j_resposta] = '@';
        //Escolhendo resposta
 
        //Preenchendo a matriz nula
        for(i=0;i<MAX;i++)
                for(j=0;j<MAX;j++) mtz_nula[i][j] = 178;
        //Fim do preenchimento da matriz nula
 
        //Preenchendo a matriz-solução
        for(i=0;i<MAX;i++){
                for(j=0;j<MAX;j++){
                        if(i>i_resposta) diferenca_i = i-i_resposta;
                        else diferenca_i = i_resposta - i;
                        if(j>j_resposta) diferenca_j = j-j_resposta;
                        else diferenca_j = j_resposta - j;
 
                        //BLOCO DOS IFS MALIGNOS
                        if( (rand()%10+1) > 5    &&    (i != i_resposta || j != j_resposta) ){ //CHANCE DE SAIR UMA DICA: 50%
 
                                if(i > i_resposta && j == j_resposta) mtz[i][j] = CIMA; // resposta logo abaixo
                                else if(i < i_resposta && j == j_resposta) mtz[i][j] = BAIXO; //resposta logo acima
                                else if(i == i_resposta && j < j_resposta) mtz[i][j] = DIREITA; //resposta logo a direita
                                else if(i == i_resposta && j > j_resposta) mtz[i][j] = ESQUERDA; //resposta logo a esquerda
 
                                else if(diferenca_i < diferenca_j && i < i_resposta) mtz[i][j] = BAIXO; //resposta abaixo
                                else if(diferenca_i < diferenca_j && i > i_resposta) mtz[i][j] = CIMA; //resposta acima
                                else if(diferenca_i > diferenca_j && j < j_resposta) mtz[i][j] = DIREITA; //resposta à esquerda
                                else if(diferenca_i > diferenca_j && j > j_resposta) mtz[i][j] = ESQUERDA; //resposta à direita
                               
                                else{ //Pra caso dê a MERDA de ser na diagonal...
 
                                        if(i < i_resposta && j < j_resposta )
                                                if(rand()%2==0) mtz[i][j] = BAIXO;
                                                else mtz[i][j] = DIREITA;
                                        else if(i < i_resposta && j > j_resposta )
                                                if(rand()%2==0) mtz[i][j] = BAIXO;
                                                else mtz[i][j] = ESQUERDA;
                                        else if(i > i_resposta && j < j_resposta )
                                                if(rand()%2==0) mtz[i][j] = CIMA;
                                                else mtz[i][j] = DIREITA;
                                        else if(i > i_resposta && j > j_resposta )
                                                if(rand()%2==0) mtz[i][j] = CIMA;
                                                else mtz[i][j] = ESQUERDA;
                                }
                        }
                        else if(i != i_resposta || j != j_resposta) mtz[i][j] = '0';
                        //FIM DO BLOCO DOS IFS MALIGNOS
                }
        }
        //Fim do preenchimento da matriz-solução.
 
        //Apresentacao do jogo
        system("color 37");
 
        printf("OLHO DA TEMPESTADE! v1.0\n\n");
       
        printf("Essa nao! A tempestade esta destruindo tudo por onde passa!\n");
        printf("Para parar a tempestade, voce devera encontrar a sua origem,\n");
        printf("Entao, o unico jeito de parar a tempestade eh encontrando o OLHO DA TEMPESTADE!\n\n\n\n");
 
 
 
        printf("Boa sorte!\n");
       
        scanf("%c",&codigo);
        if(codigo=='*'){
                printf("Resposta: mtz[%d][%d]\n\n",i_resposta+1,j_resposta+1);
                system("Pause");
        }
 
        system("cls");
        system("color 07");
        i=0;j=0; //resetando os valores dos contadores
 
        ////////////////////////////////
 
        do{
                fflush(stdin);
                //mtz_usuario
                printf("  ");
                for(j=0;j<MAX;j++) printf("%d ",j+1); //numerando colunas
                for(i=0;i<MAX;i++){
                        printf("\n");
                        printf("%d ",i+1); //numerando linhas
                        for(j=0;j<MAX;j++){
                                printf("%c ",mtz_nula[i][j]);
                        }
                }
                //fim da mtz_usuario
 
 
                printf("\n\nDigite seu palpite:\n");
                printf("Linha: ");
                scanf("%d",&i);
                printf("Coluna: ");
                scanf("%d",&j);
               
                        /*nao consegui substituir esse if.
                tentei  if(mtz_nula[i-1][j-1] == 178), mas nao deu certo);*/
                if(mtz_nula[i-1][j-1] != CIMA && mtz_nula[i-1][j-1] != BAIXO && mtz_nula[i-1][j-1] != ESQUERDA && mtz_nula[i-1][j-1] != DIREITA && mtz_nula[i-1][j-1] != '0')
                {
                        mtz_nula[i-1][j-1] = mtz[i-1][j-1];
                        if(mtz[i-1][j-1] == BAIXO) printf("Que tal tentar um pouco pra baixo?\n");
                        else if(mtz[i-1][j-1] == CIMA) printf("Que tal tentar um pouco mais pra cima?\n");
                        else if(mtz[i-1][j-1] == DIREITA) printf("Que tal tentar um pouco mais pra direita?\n");
                        else if(mtz[i-1][j-1] == ESQUERDA) printf("Que tal tentar um pouco mais pra esquerda?\n");
                        else if(mtz[i-1][j-1] == '0') printf("Droga! Daqui nao tem como saber pra onde ir! \n");
                        else if(mtz[i-1][j-1] == '@'){
                                win = 1;
                                printf("Parabens, voce ganhou!\n");
                        }
 
                        if(win==0){
                                tentativas = tentativas-1;
                                if(tentativas == 0){
                                        win = 2;
                                        printf("Que pena! Voce nao tem mais tentativas!\n");
                                }
                                else printf("\n%d tentativa(s) restante(s)!",tentativas);
                        }
                }
                else printf("Tem certeza que voce ja nao tentou ai?");
               
                system("Pause");
                system("cls");
        }while(win==0);
 
        if(win == 1){
                system("Color 37");
                printf("Parabens! Voce foi capaz de encontrar o Olho da Tempestade!\n");
                printf("Gracas aos seus esforcos, essa tempesatade nao voltara a perturba-lo!\n\n\n\n\n");
                printf("//////////////////////////\n");
                printf("//Thank you for playing //\n");
                printf("//Jogo por: Rafael Gibim//\n");
                printf("//////////////////////////\n");
        }
 
        else{
                system("Color 47");
                printf("Essa nao, voce perdeu!\n");
                printf("A tempestade continua a destruir tudo ao seu redor! \n");
                printf("\n\n\n\n\n......O olho da tempestade moveu-se de local.\n");
                printf("Tente novamente! Por favor, nao desista!\n");
        }
 
 
 
        system("Pause");
}
