/*4. Escreva um programa que solicite ao usuário um número e escreva  simultaneamente a sequência crescente e decrescente entre 1 
e esse  número: */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contCrescente = 1, contDecrescente, numero;

    printf("insira um numero para ver a ordem crescente e decrescente de 1 ate ele: ");
    scanf("%d", &numero);
    contDecrescente = numero;
    printf("Ordem crescente\t| Ordem decrescente\n");

    while(contCrescente <= numero)
    {
        printf("\t%d", contCrescente);
        printf("\t\t%d\n", contDecrescente);
        contCrescente++;
        contDecrescente--;
    }
    system("pause");
    return 0;    
}