/*Faça um programa que permita fazer um levantamento  do estoque de vinhos de uma
adega,  tendo  como  dados  de  entrada  tipos  de  vinho,  sendo:  'T'  para  tinto,  'B'  para
branco e 'R' para rosê. A quantidade de vinhos é desconhecida, utilize como finalizador
'F'  de  fim.  Ao  final,  especifique  a  porcentagem  de  cada  tipo  sobre  o  total  geral  de
vinhos.*/
 
#include <stdio.h>
#include <stdlib.h>
 
void main()
{
        char vinho='a';
        int vtinto=0, vbranco=0, vrose=0;
        float vtotal=0;
 
 
 
        do
        {
                printf("LEVANTAMENTO DE VINHOS\n\n");
                printf("Digite o tipo de vinho a ser registrado de acordo com o menu:\n");
                printf("T - Tinto\n");
                printf("B - Branco\n");
                printf("R - Rose\n");
                printf("F - Encerrar registros\n");
 
                scanf("%c",&vinho);
                switch(vinho)
                {
                        case 't':
                        case 'T': vtinto = vtinto+1;
                                vtotal = vtotal+1;
                                printf("\n\nVinhos tintos: %d\nVinhos brancos: %d\nVinhos rose: %d\n",vtinto,vbranco,vrose);
                                break;
                        case 'b':
                        case 'B': vbranco = vbranco+1;
                                vtotal = vtotal+1;
                                printf("\n\nVinhos tintos: %d\nVinhos brancos: %d\nVinhos rose: %d\n",vtinto,vbranco,vrose);
                                break;
                        case 'r':
                        case 'R': vrose = vrose+1;
                                vtotal = vtotal+1;
                                printf("\n\nVinhos tintos: %d\nVinhos brancos: %d\nVinhos rose: %d\n",vtinto,vbranco,vrose);
                                break;
                        case 'f':
                        case 'F': printf("Programa encerrado\n\n");
                                break;
                        default: printf("Opcao invalida");
                }
                system("pause");
                fflush(stdin);
                if(vinho!='f' && vinho!='F') system("cls");
        }while(vinho!='f' && vinho!='F');
 
        printf("\n\nPorcentagem de vinhos tintos: %.1f%%\nPorcentagem de vinhos brancos: %.1f%%\nPorcentagem de vinhos rose: %.1f%%\n",100*vtinto/vtotal,100*vbranco/vtotal,100*vrose/vtotal);
        system("Pause");
}
