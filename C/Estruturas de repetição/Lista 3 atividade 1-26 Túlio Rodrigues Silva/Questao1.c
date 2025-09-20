/*1. Escreva um programa que imprima de 1 a 100 na tela.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont = 1;

    while(cont <= 100)
    {
        printf("(%d)\n", cont);
        cont++;
    }
    system("pause");
    return 0;    
}