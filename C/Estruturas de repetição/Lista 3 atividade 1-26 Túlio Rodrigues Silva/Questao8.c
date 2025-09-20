/*Escreva um programa que encontre o menor de vários inteiros. Considere  que o primeiro valor lido especifique o número de 
valores restantes. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroValores, valores, numeroMenor, cont = 1;

    printf("Insira a quantidade de valores que voce ira inserir: ");
    scanf("%d", &numeroValores);

    printf("Insira um numero: ");
    scanf("%d", &valores);

    numeroMenor = valores;
    numeroValores = numeroValores - 1;

    while(cont <= numeroValores)
    {
        printf("Insira um numero: ");
        scanf("%d", &valores);

        if (valores < numeroMenor)
        {
            numeroMenor = valores;
        }

        cont++;
    }
    printf("O menor numero e o %d\n", numeroMenor);

    system("pause");
    return 0;    
}