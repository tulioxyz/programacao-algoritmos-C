/*20.Escreva um programa que leia um número n e imprima todos os múltiplos  de 3 entre 1 e n. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, cont = 3;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    while(cont <= numero)
    {
        printf("%d\n", cont);
        cont = cont + 3;
    }

    system("pause");
    return 0;    
}