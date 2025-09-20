/*9. Escreva um programa que calcule e imprima a soma dos inteiros pares de 2 a 30. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont = 2, acumulador = 0;
    
    while (cont <= 30)
    {
       acumulador = acumulador + cont;
       cont = cont + 2;                                       
    }

    printf("A soma dos inteiros pares de 2 a 30 e: %d\n", acumulador);

    system("pause");
    return 0;    
}