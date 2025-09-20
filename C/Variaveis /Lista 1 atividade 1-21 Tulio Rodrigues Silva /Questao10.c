/*Altere a calculadora simples para que também apresente o resultado da
divisão entre os dois inteiros como um float.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5, y = 2;
    int soma = x + y, multi = x * y, div = x / y, sub = x - y;
    float divInteiro = x / y;

    printf("Os resultados sao;\n\n");
    printf("%d + %d = %d\n", x, y, soma);
    printf("%d - %d = %d\n", x, y, sub);
    printf("%d * %d = %d\n", x, y, multi);
    printf("%d / %d = %d\n", x, y, div);

    printf("%d / %d = %.2f\n", x, y, divInteiro);

    system("pause");
    return 0;
}