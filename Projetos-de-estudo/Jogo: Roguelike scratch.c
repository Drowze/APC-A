 /*
Roguelike v1.0
Autor: Rafael Gibim
Limitações: 1º semestre de APC; não há uso de funções.
 
Changelog:
0.1: Personagem se move sem "entrar" nas paredes
0.2: Mapa 15x40 com câmera expandível (mas não é móvel)
0.3a: Sistema básico de encontros. Experiência cumulativa, mas level-up não implementado
0.3b: Sistema básico de encontros (bug ocasional?) level-up implementado
1.0: Release final, pequenas correções de bugs e telas de apresentação adicionadas.
 
Definições:
@ : personagem
. : Espaço vazio
# : parede
 
Monstros:
! : Troll
% : Ogro
+ : Professor que da nota baixa
*/
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //necessária para melhorar a aleatoriedade
#include <conio.h> //necessária para a função getch
 
 /* Quantidade de fileiras e colunas */
#define FILE 17
#define COLU 42
 
 /* Valores ASCII das setas e da tecla ESC */
#define SETA_CIMA 72
#define SETA_BAIXO 80
#define SETA_ESQUERDA 75
#define SETA_DIREITA 77
#define ESC 27
 
/* Valores facilmente modificáveis */
#define QTD_MAX_DE_MONSTROS 10
 
#define EXPERIENCIA_TROLL 10
#define EXPERIENCIA_OGRO 30
#define EXPERIENCIA_PROF 50
 
#define HP_TROLL 10
#define HP_OGRO 30
#define HP_PROF 60
 
#define ATK_TROLL 7
#define ATK_OGRO 15
#define ATK_PROF 20
 
#define HP_INICIAL 100
#define HP_POR_LEVEL 20
#define EXPERIENCIA_LEVEL_UP 50
#define ATK_INICIAL 15
#define ATK_POR_LEVEL 5
 
void main(){
        int hp = HP_INICIAL;
        int hp_total = HP_INICIAL;
        int atk = ATK_INICIAL;
        int exp_atual = 0;
        int exp_total = 0;
        int level_atual = 1;
 
        int hp_monstro;
        int contador_monstros=0;
 
        int win = 0; //0: derrota, 1: vitória
        int i, j; //meros contadores
        int i_atual, j_atual; //guarda a posição do jogador
        int camera_x = 6, camera_y = 11;
 
        int random; //auxiliador randômico
        int aux = 0; //Variável puramente auxiliar
 
        char ch=0; //variável para reconhecer as setas
        char tabuleiro[FILE][COLU];
        srand(time(NULL));
 
        /* Preenchendo o tabuleiro */
        for(i=0;i<FILE;i++){
                for(j=0;j<COLU;j++){
                        tabuleiro[i][j] = '.';
                        if(i==0 || j == 0 || i==FILE-1 || j==COLU-1) tabuleiro[i][j] = '#';
                }
        }
 
        /* Definindo posição do jogador */
        i_atual = 1;
        j_atual = 1;
        tabuleiro[i_atual][j_atual] = '@';
 
        /* Colocando monstros aleatórios */
        contador_monstros = rand()%QTD_MAX_DE_MONSTROS+1; //numero aleatório de monstros
        for(aux = 0; aux < contador_monstros; ){
                do{
                        i = rand()%(FILE-2) + 1;
                        j = rand()%(COLU-2) + 1;
                        if(tabuleiro[i][j] == '.') {
                                aux++;
                                random = rand()%10+1;
                                if(random <= 2) tabuleiro[i][j] = '+'; //20% do assustador professor da nota baixa
                                else if(random <= 5) tabuleiro[i][j] = '%'; //30% de um monstruoso ogro
                                else tabuleiro[i][j] = '!'; //50% de um troll bobão
                        }
                }while(tabuleiro[i][j] == '@');
        }
 
        /* Apresentação */
        puts("Apos um tempo inconsciente, voce acorda e se depara preso numa masmorra.");
        puts("Voce nao sabe como foi parar ai, mas sabe que para sair devera derrotar todos");
        puts("os monstros\n\n");
        puts("@ : seu personagem");
        puts("# : paredes da masmorra\n");
        puts("! : Troll, o bobao");
        puts("% : Ogro, o monstruoso");
        puts("+ : Professor das notas baixas, o assustador");
        system("pause");
        system("cls");
 
        /* Bloco onde a mágica acontece */
        do{
                system("cls");
 
                /* Imprimindo o tabuleiro. */
                for(j=0; j<camera_y+2; j++) printf("?");
                printf("\n");
                for(i=0; i<camera_x; i++){
                        printf("?");
                        for(j=0;j<camera_y;j++) printf("%c", tabuleiro[i][j]);
                        printf("?");
                        printf("\n");
                }
                for(j=0; j<camera_y+2; j++) printf("?");
                printf("\n");
 
 
                /* Informações na tela */
                printf("\n\nLevel atual: %d",level_atual);
                printf("\nSeu HP: %d/%d",hp,hp_total);
                printf("\nSeu ataque maximo: %d",atk);
                printf("\nExperiencia: %d",exp_atual);
                printf("\nMonstros restantes: %d",contador_monstros);
                printf("\n\nUtilize as setas para movimentar seu personagem\n");
                printf("Aperte ESC para sair\n");
               
 
                /* Reconhecimento de tecla. */
                ch = getch();
 
                switch(ch){
                case SETA_CIMA:
                        /* Encontro Troll */
                        if(tabuleiro[i_atual-1][j_atual] == '!'){
                                hp_monstro = HP_TROLL ;
                                do{
                                        hp = hp - rand()%ATK_TROLL+1;
                                        if(hp>=0) printf("Troll desferiu um ataque. Voce possui %d de vida restantes\n",hp);
                                        else printf("Voce morreu\n\n");
                                        hp_monstro = hp_monstro - rand()%atk+1;
                                        if(hp_monstro>=0) printf("Voce desferiu um ataque. O troll possui %d de vida restantes\n\n",hp_monstro);
                                        else {
                                                printf("O monstro morreu\n\n");
                                                exp_atual = exp_atual + EXPERIENCIA_TROLL;
                                                exp_total = exp_total + exp_atual;
                                                tabuleiro[i_atual-1][j_atual] = '.';
                                                contador_monstros--;
                                        }
                                        system("Pause");
                                }while(hp > 0 && hp_monstro > 0);
                        }
 
                        /* Encontro Ogro */
                        if(tabuleiro[i_atual-1][j_atual] == '%'){
                                hp_monstro = HP_OGRO ;
                                do{
                                        hp = hp - rand()%ATK_OGRO+1;
                                        if(hp>=0) printf("Ogro desferiu um ataque. Voce possui %d de vida restantes\n",hp);
                                        else printf("Voce morreu\n\n");
                                        hp_monstro = hp_monstro - rand()%atk+1;
                                        if(hp_monstro>=0) printf("Voce desferiu um ataque. O ogro possui %d de vida restantes\n\n",hp_monstro);
                                        else {
                                                printf("O monstro morreu\n\n");
                                                exp_atual = exp_atual + EXPERIENCIA_OGRO;
                                                exp_total = exp_total + exp_atual;
                                                tabuleiro[i_atual-1][j_atual] = '.';
                                                contador_monstros--;
                                        }
                                        system("Pause");
                                }while(hp > 0 && hp_monstro > 0);
                        }
 
                        /* Encontro Professor */
                        if(tabuleiro[i_atual-1][j_atual] == '+'){
                                hp_monstro = HP_PROF ;
                                do{
                                        hp = hp - rand()%ATK_PROF+1;
                                        if(hp>=0) printf("Professor das notas baixas desferiu um ataque. Voce possui %d de vida restantes\n",hp);
                                        else printf("Voce morreu\n\n");
                                        hp_monstro = hp_monstro - rand()%atk+1;
                                        if(hp_monstro>=0) printf("Voce desferiu um ataque. O professor possui %d de vida restantes\n\n",hp_monstro);
                                        else {
                                                printf("O professor morreu (e sua nota continua alta!)\n\n");
                                                exp_atual = exp_atual + EXPERIENCIA_PROF;
                                                exp_total = exp_total + exp_atual;
                                                tabuleiro[i_atual-1][j_atual] = '.';
                                                contador_monstros--;
                                        }
                                        system("Pause");
                                }while(hp > 0 && hp_monstro > 0);
                        }
                                       
                        if(tabuleiro[i_atual-1][j_atual] == '.'){
                                aux = tabuleiro[i_atual][j_atual];
                                tabuleiro[i_atual][j_atual] = tabuleiro[i_atual-1][j_atual];
                                tabuleiro[i_atual-1][j_atual] = aux;
                                i_atual--;
                                if(i_atual<12) camera_x--;
                        }
                        break;
 
 
                case SETA_BAIXO:
                        /* Encontro Troll */
                        if(tabuleiro[i_atual+1][j_atual] == '!'){
                                hp_monstro = HP_TROLL ;
                                do{
                                        hp = hp - rand()%ATK_TROLL+1;
                                        if(hp>=0) printf("Troll desferiu um ataque. Voce possui %d de vida restantes\n",hp);
                                        else printf("Voce morreu\n\n");
                                        hp_monstro = hp_monstro - rand()%atk+1;
                                        if(hp_monstro>=0) printf("Voce desferiu um ataque. O troll possui %d de vida restantes\n\n",hp_monstro);
                                        else {
                                                printf("O monstro morreu\n\n");
                                                exp_atual = exp_atual + EXPERIENCIA_TROLL;
                                                exp_total = exp_total + exp_atual;
                                                tabuleiro[i_atual+1][j_atual] = '.';
                                                contador_monstros--;
                                        }
                                        system("Pause");
                                }while(hp > 0 && hp_monstro > 0);
                        }
 
                        /* Encontro Ogro */
                        if(tabuleiro[i_atual+1][j_atual] == '%'){
                                hp_monstro = HP_OGRO ;
                                do{
                                        hp = hp - rand()%ATK_OGRO+1;
                                        if(hp>=0) printf("Ogro desferiu um ataque. Voce possui %d de vida restantes\n",hp);
                                        else printf("Voce morreu\n\n");
                                        hp_monstro = hp_monstro - rand()%atk+1;
                                        if(hp_monstro>=0) printf("Voce desferiu um ataque. O ogro possui %d de vida restantes\n\n",hp_monstro);
                                        else {
                                                printf("O monstro morreu\n\n");
                                                exp_atual = exp_atual + EXPERIENCIA_OGRO;
                                                exp_total = exp_total + exp_atual;
                                                tabuleiro[i_atual+1][j_atual] = '.';
                                                contador_monstros--;
                                        }
                                        system("Pause");
                                }while(hp > 0 && hp_monstro > 0);
                        }
 
                        /* Encontro Professor */
                        if(tabuleiro[i_atual+1][j_atual] == '+'){
                                hp_monstro = HP_PROF ;
                                do{
                                        hp = hp - rand()%ATK_PROF+1;
                                        if(hp>=0) printf("Professor das notas baixas desferiu um ataque. Voce possui %d de vida restantes\n",hp);
                                        else printf("Voce morreu\n\n");
                                        hp_monstro = hp_monstro - rand()%atk+1;
                                        if(hp_monstro>=0) printf("Voce desferiu um ataque. O professor possui %d de vida restantes\n\n",hp_monstro);
                                        else {
                                                printf("O professor morreu (e sua nota continua alta!)\n\n");
                                                exp_atual = exp_atual + EXPERIENCIA_PROF;
                                                exp_total = exp_total + exp_atual;
                                                tabuleiro[i_atual+1][j_atual] = '.';
                                                contador_monstros--;
                                        }
                                        system("Pause");
                                }while(hp > 0 && hp_monstro > 0);
                        }
 
                        if(tabuleiro[i_atual+1][j_atual] == '.'){
                                aux = tabuleiro[i_atual][j_atual];
                                tabuleiro[i_atual][j_atual] = tabuleiro[i_atual+1][j_atual];
                                tabuleiro[i_atual+1][j_atual] = aux;
                                i_atual++;
                                if(i_atual<13) camera_x++;
                        }
                        break;
 
 
                case SETA_DIREITA:
                        /* Encontro Troll */
                        if(tabuleiro[i_atual][j_atual+1] == '!'){
                                hp_monstro = HP_TROLL ;
                                do{
                                        hp = hp - rand()%ATK_TROLL+1;
                                        if(hp>=0) printf("Troll desferiu um ataque. Voce possui %d de vida restantes\n",hp);
                                        else printf("Voce morreu\n\n");
                                        hp_monstro = hp_monstro - rand()%atk+1;
                                        if(hp_monstro>=0) printf("Voce desferiu um ataque. O troll possui %d de vida restantes\n\n",hp_monstro);
                                        else {
                                                printf("O monstro morreu\n\n");
                                                exp_atual = exp_atual + EXPERIENCIA_TROLL;
                                                exp_total = exp_total + exp_atual;
                                                tabuleiro[i_atual][j_atual+1] = '.';
                                                contador_monstros--;
                                        }
                                        system("Pause");
                                }while(hp > 0 && hp_monstro > 0);
                        }
 
                        /* Encontro Ogro */
                        if(tabuleiro[i_atual][j_atual+1] == '%'){
                                hp_monstro = HP_OGRO ;
                                do{
                                        hp = hp - rand()%ATK_OGRO+1;
                                        if(hp>=0) printf("Ogro desferiu um ataque. Voce possui %d de vida restantes\n",hp);
                                        else printf("Voce morreu\n\n");
                                        hp_monstro = hp_monstro - rand()%atk+1;
                                        if(hp_monstro>=0) printf("Voce desferiu um ataque. O ogro possui %d de vida restantes\n\n",hp_monstro);
                                        else {
                                                printf("O monstro morreu\n\n");
                                                exp_atual = exp_atual + EXPERIENCIA_OGRO;
                                                exp_total = exp_total + exp_atual;
                                                tabuleiro[i_atual][j_atual+1] = '.';
                                                contador_monstros--;
                                        }
                                        system("Pause");
                                }while(hp > 0 && hp_monstro > 0);
                        }
 
                        /* Encontro Professor */
                        if(tabuleiro[i_atual][j_atual+1] == '+'){
                                hp_monstro = HP_PROF ;
                                do{
                                        hp = hp - rand()%ATK_PROF+1;
                                        if(hp>=0) printf("Professor das notas baixas desferiu um ataque. Voce possui %d de vida restantes\n",hp);
                                        else printf("Voce morreu\n\n");
                                        hp_monstro = hp_monstro - rand()%atk+1;
                                        if(hp_monstro>=0) printf("Voce desferiu um ataque. O professor possui %d de vida restantes\n\n",hp_monstro);
                                        else {
                                                printf("O professor morreu (e sua nota continua alta!)\n\n");
                                                exp_atual = exp_atual + EXPERIENCIA_PROF;
                                                exp_total = exp_total + exp_atual;
                                                tabuleiro[i_atual][j_atual+1] = '.';
                                                contador_monstros--;
                                        }
                                        system("Pause");
                                }while(hp > 0 && hp_monstro > 0);
                        }
                               
                        if(tabuleiro[i_atual][j_atual+1] == '.'){
                                aux = tabuleiro[i_atual][j_atual];
                                tabuleiro[i_atual][j_atual] = tabuleiro[i_atual][j_atual+1];
                                tabuleiro[i_atual][j_atual+1] = aux;
                                j_atual++;
                                if(j_atual<33) camera_y++;
                        }
                        break;
 
 
                case SETA_ESQUERDA:
                        /* Encontro Troll */
                        if(tabuleiro[i_atual][j_atual-1] == '!'){
                                hp_monstro = HP_TROLL ;
                                do{
                                        hp = hp - rand()%ATK_TROLL+1;
                                        if(hp>=0) printf("Troll desferiu um ataque. Voce possui %d de vida restantes\n",hp);
                                        else printf("Voce morreu\n\n");
                                        hp_monstro = hp_monstro - rand()%atk+1;
                                        if(hp_monstro>=0) printf("Voce desferiu um ataque. O troll possui %d de vida restantes\n\n",hp_monstro);
                                        else {
                                                printf("O monstro morreu\n\n");
                                                exp_atual = exp_atual + EXPERIENCIA_TROLL;
                                                exp_total = exp_total + exp_atual;
                                                tabuleiro[i_atual][j_atual-1] = '.';
                                                contador_monstros--;
                                        }
                                        system("Pause");
                                }while(hp > 0 && hp_monstro > 0);
                        }
 
                        /* Encontro Ogro */
                        if(tabuleiro[i_atual][j_atual-1] == '%'){
                                hp_monstro = HP_OGRO ;
                                do{
                                        hp = hp - rand()%ATK_OGRO+1;
                                        if(hp>=0) printf("Ogro desferiu um ataque. Voce possui %d de vida restantes\n",hp);
                                        else printf("Voce morreu\n\n");
                                        hp_monstro = hp_monstro - rand()%atk+1;
                                        if(hp_monstro>=0) printf("Voce desferiu um ataque. O ogro possui %d de vida restantes\n\n",hp_monstro);
                                        else {
                                                printf("O monstro morreu\n\n");
                                                exp_atual = exp_atual + EXPERIENCIA_OGRO;
                                                exp_total = exp_total + exp_atual;
                                                tabuleiro[i_atual][j_atual-1] = '.';
                                                contador_monstros--;
                                        }
                                        system("Pause");
                                }while(hp > 0 && hp_monstro > 0);
                        }
 
                        /* Encontro Professor */
                        if(tabuleiro[i_atual][j_atual-1] == '+'){
                                hp_monstro = HP_PROF ;
                                do{
                                        hp = hp - rand()%ATK_PROF+1;
                                        if(hp>=0) printf("Professor das notas baixas desferiu um ataque. Voce possui %d de vida restantes\n",hp);
                                        else printf("Voce morreu\n\n");
                                        hp_monstro = hp_monstro - rand()%atk+1;
                                        if(hp_monstro>=0) printf("Voce desferiu um ataque. O professor possui %d de vida restantes\n\n",hp_monstro);
                                        else {
                                                printf("O professor morreu (e sua nota continua alta!)\n\n");
                                                exp_atual = exp_atual + EXPERIENCIA_PROF;
                                                exp_total = exp_total + exp_atual;
                                                tabuleiro[i_atual][j_atual-1] = '.';
                                                contador_monstros--;
                                        }
                                        system("Pause");
                                }while(hp > 0 && hp_monstro > 0);
                        }
 
                        if(tabuleiro[i_atual][j_atual-1] == '.'){
                                aux = tabuleiro[i_atual][j_atual];
                                tabuleiro[i_atual][j_atual] = tabuleiro[i_atual][j_atual-1];
                                tabuleiro[i_atual][j_atual-1] = aux;
                                j_atual--;
                                if(j_atual<32) camera_y--;
                        }
                        break;
                }
 
                /* Algoritmo do "level-up" */
                if(exp_atual / EXPERIENCIA_LEVEL_UP == 1){
                        printf("Parabens, voce \"upou\" de level!\n\n");
                        level_atual++;
                        hp_total = hp_total+HP_POR_LEVEL;
                        hp = hp_total;
                        exp_atual = exp_atual%EXPERIENCIA_LEVEL_UP;
                        atk = atk+ATK_POR_LEVEL;
                        getch();
                }
 
                if(contador_monstros == 0) {
                        win = 1;
                        printf("Todos os monstros foram derrotados!\n");
                        getch();
                }
 
        }while(ch!= ESC && contador_monstros > 0 && hp > 0);
 
        system("cls");
 
        if(ch == ESC) printf("Voce desistiu\n\n");
        else if(win==1){
                printf("Parabens, voce derrotou todos os monstros e venceu o jogo!\n\n");
        }
        else {
                printf("Voce morreu! Game over!\n\n");
        }
 
        system("Pause");
}
