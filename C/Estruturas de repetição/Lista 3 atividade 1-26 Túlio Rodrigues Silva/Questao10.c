/*10.Escreva um programa que calcule e imprima o produto dos inteiros  ímpares de 1 a 15. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont = 1, acumulador = 1;

    while (cont <= 15)
    {
        acumulador = (acumulador * cont);
        cont = cont + 2;
    }

    printf("O produto dos inteiros impares de 1 a 15 e: %d\n", acumulador);

    system("pause");
    return 0;    
}