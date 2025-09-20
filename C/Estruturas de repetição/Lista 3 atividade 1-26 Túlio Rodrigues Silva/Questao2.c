/*Escreva um programa em C que escreva na tela toda a tabela
ASCII do código 33 até o 255.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont = 33;

    while(cont <= 255)
    {
        printf("(%c)\n", cont);
        cont++;
    }
    system("pause");
    return 0;    
}