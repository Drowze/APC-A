//inclusão das bibliotecas
#include <stdio.h>
#include <stdlib.h>
 
/* Crie um programa em C e exercite os conceitos vistos nessa aula: estrutura correta do
programa, comentários, comandos system(“color”) e printf. Entenda exatamente como
cada um desses comandos funciona. Eles são a base para as próximas aulas. */
 
void main()
{
        system("Color 70"); //Nas próximas linhas, o programa exibe o texto "Cor teste" com fundo branco e fonte preta.
        printf("Cor teste\n");
        system("pause");
 
        system("Color 07"); //Após alguma tecla do usuário (pedido pelo comando system("pause")) o programa exibe "Cor teste" com fundo preto e fonte branca.
        printf("Cor teste\n");
        system("pause");
 
        system("cls"); //Após alguma tecla do usuário o programa limpa a tela e pede alguma tecla do usuário para ser fechado.
        system("pause");
}
