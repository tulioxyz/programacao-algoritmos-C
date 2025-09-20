/*Altere os tipos das variáveis para float, altere os valores e faça os ajustes
necessários para imprimir valores com até 4 casas decimais de precisão.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x = 5.657, y = 2.555;
    float div = x / y;

    printf("%.4f / %.4f = %.4f\n", x, y, div);
    
    system("pause");
    return 0;
}