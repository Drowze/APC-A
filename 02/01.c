//inclusão das bibliotecas
#include <stdio.h>
#include <stdlib.h>
 
/* Fazer um programa que receba dois números, calcule e escreva na tela a soma, a
multiplicação, a divisão e a subtração desses números. */
 
void main()
{
        float a, b; //Declaração das duas variáveis
        printf("Digite dois numeros e irei exibir na tela a soma, o produto, o \nquociente e a diferenca entre eles.\n");
        scanf("%f",&a); //O usuário atribui um valor às variáveis. Note que eu poderia usar apenas scanf("%d %d", &a, &b)
        scanf("%f",&b);
               
        //Executando operações com as variáveis. Note que não é necessário criar uma nova variável para atribuir o resultado
        printf("Soma = %f\n", a+b);
        printf("Produto = %f\n", a*b);
        printf("Quociente = %f\n", a/b);
        printf("Diferenca = %f\n", a-b);
 
        system("Pause");
}
