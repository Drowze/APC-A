/*
Projeto: Jogo de perguntas e respostas (utilizável em provas ou trivias, por exemplo)
Versão: 1.0
 
Changelog:
        1.0:
        *Input do jogador
 
        Segunda versão de rascunho:
        *Respostas que são embaralhadas junto com suas alternativas correspondentes
 
Elementos do jogo e seu funcionamento:
*Banco de perguntas (e de tamanho ajustável) (com matriz para respostas)
*Numero de perguntas a serem colocadas em jogo (com matriz para respostas)
*Perguntas aleatórias do banco de perguntas são copiadas para aparecerem em jogo (junto com suas respostas)
*As perguntas em jogo tem suas alternativas embaralhadas (assim como suas respostas)
*As perguntas aparecem na tela, uma a uma, pedindo respostas e acumulam pontos em seu acerto
 
*/
 
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
 
#define NUM_PERGUNTAS_TOTAL 10
#define NUM_PERGUNTAS 5
 
void main(){
        srand(time(NULL));
        int i,j;
        int random;
 
        /* 5 perguntas entram em jogo,
        sendo: 1 linha para pergunta e quatro para alternativas,
        com cada linha tendo 30 caracteres */
        char trivia[NUM_PERGUNTAS][5][100];
 
        /* Banco de perguntas */
        char banco[NUM_PERGUNTAS_TOTAL][5][100]=
        {
                "Qual empresa criou a franquia Final Fantasy?",
                "SquareEnix",
                "Capcom",
                "EA Games",
                "SquareSoft", //A principio, a resposta certa é sempre a quarta alternativa
 
                "Waluigi, da serie Mario, possui roupa de que cor predominante?",
                "Amarela",
                "Verde",
                "Rosa",
                "Roxa", //No entanto, as respostas serão embaralhadas posteriormente
 
                "Qual o jogo online atualmente (2014) mais jogado no mundo?",
                "Counter Strike: Global Offensive",
                "Fifa 14",
                "Dota 2",
                "League Of Legends",
               
                "Quantos pokemons tem a segunda geracao de Pokemon?",
                "51",
                "151",
                "718",
                "251",
 
                "Pokemon X e Y roda em qual console?",
                "Nintendo DS",
                "Nintendo DS Lite",
                "Nintendo DSi",
                "Nintendo 3DS",
               
                "Qual destes jogos foi feito pela Blizzard?",
                "Age of Empires",
                "Golden Axe",
                "League of Legends",
                "Rock N Roll Racing",
 
                "O porco espinho Sonic apareceu primeiro em qual console?",
                "Super Nintendo",
                "Nintendo (8bits)",
                "Atari 2600",
                "Mega Drive",
               
                "Qual Pokemon eh conhecido como um clone?",
                "Mew",
                "Jirachi",
                "Celebi",
                "Mewtwo",
 
                "Qual o nome do protagonista da serie Half-Life?",
                "Morgan Freeman",
                "Master Chief",
                "Duke Nukem",
                "Gordon Freeman",
               
                "Qual destes personagens eh famoso por ser brasileiro?",
                "Link, da serie Zelda",
                "Dante, da serie Devil May Cry",
                "Snake, da serie Metal Gear",
                "Blanka, da serie Street Fighter",
        };
 
        /* Banco de respostas */
        /* 0:resposta errada
           1: resposta certa
           99: pergunta */
        int respostas_banco[NUM_PERGUNTAS_TOTAL][5] = {
        99,0,0,0,1,
        99,0,0,0,1,
        99,0,0,0,1,
        99,0,0,0,1,
        99,0,0,0,1,
        99,0,0,0,1,
        99,0,0,0,1,
        99,0,0,0,1,
        99,0,0,0,1,
        99,0,0,0,1
        };
 
        int respostas_trivia[NUM_PERGUNTAS][5];
 
//---------------------------------------// Fim dos "bancos de dados"
 
 
        /* Algoritmo copiar perguntas aleatórias do banco de perguntas */
        int booleano = 0;
 
        for(i=0; i<NUM_PERGUNTAS; i++){
                booleano = 0;
                random = rand()%NUM_PERGUNTAS_TOTAL;
 
                //checar se a pergunta ja nao foi sorteada antes
                if(i>0){
                        for(int count=0; count<NUM_PERGUNTAS; count++){
                                if(strcmp(trivia[count][0], banco[random][0]) == 0){
                                        booleano = 1;
                                        i--;
                                }
                        }
                }
               
                //se ela nao foi, copie!
                if(booleano == 0){
                        for(int count=0; count<5; count++)
                                respostas_trivia[i][count] = respostas_banco[random][count]; //copiar a resposta da pergunta
                        for(j=0;j<5;j++)
                                strcpy(trivia[i][j], banco[random][j]); //copiar a pergunta e suas alternativas
                }
        }
       
        /* Algoritmo para embaralhar as alternativas */
        char aux[100];
 
        for(i=0; i<NUM_PERGUNTAS; i++){
                for(j=1; j<5; j++){
                        random = (rand()%4)+1;
 
                        strcpy(aux, trivia[i][j]);
                        strcpy(trivia[i][j], trivia[i][random]);
                        strcpy(trivia[i][random], aux);
                       
                        //Para a resposta acompanhar a alternativa
                        aux[0] = respostas_trivia[i][random];
                        respostas_trivia[i][random] = respostas_trivia[i][j];
                        respostas_trivia[i][j] = aux[0];
                }
        }
 
//---------------------------------------// Fim da preparação do jogo
 
 
        /* Algoritmo final do jogo */
        int pontos = 0;
        int palpite;
 
        for(i = 0; i<NUM_PERGUNTAS; i++){
                system("cls");
                fflush(stdin);
               
                printf("***PERGUNTAS E RESPOSTAS EM C! Facilmente editavel no codigo\n");
                printf("***Numero de perguntas: %d\n",NUM_PERGUNTAS);
                printf("***Programa por: Rafael Gibim\n\n");
 
                for(j=0;j<5;j++){
                        if(j!=0) printf("%d- ",j);
                        printf("%s\n",trivia[i][j]);
                }
 
                printf("Digite a resposta certa: ");
                scanf("%d",&palpite);
 
                if(respostas_trivia[i][palpite] == 1){
                        printf("Parabens, voce acertou!\n\n");
                        pontos++;
                }
                else printf("Voce errou! :(\n\n");
 
                system("Pause");
        }
 
        if(pontos == NUM_PERGUNTAS) printf("\n\nUAU! Voce acertou todas as perguntas! Parabens!\n\n");
        else if(pontos >= NUM_PERGUNTAS/2) printf("\n\nParabens, voce acertou %d questoes!\n\n", pontos);
        else if(pontos == 0) printf("\n\nTem certeza que esta tentando? Voce nao acertou nennhuma.\n\n");
        else printf("\n\nUma pena, voce errou muito e acertou apenas %d questoes.\n\n", pontos);
 
 
 
        system("Pause");
}
