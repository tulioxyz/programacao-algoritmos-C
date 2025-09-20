/*Altere o programa anterior para imprimir diretamente o tamanho da variável
sem armazenar esse tamanho em uma variável intermediária.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    char b;
    float c;
    double d;

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));
    printf("%d bytes\n", sizeof(d));

    system("pause");
    return 0;
}