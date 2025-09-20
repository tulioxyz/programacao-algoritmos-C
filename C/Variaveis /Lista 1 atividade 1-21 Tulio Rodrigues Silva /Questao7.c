/*Escreva um programa que usando a função sizeof, imprima o tamanho das
variáveis dos respectivos tipos: char, short, int, long, float e double.
Ex de saída:
Tipo int: 4 bytes
Tipo float: 4 bytes
Tipo double: 8 bytes*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    char b;
    float c;
    double d;

    int tamanhoInt = sizeof(a);
    int tamanhoChar = sizeof(b);
    int tamanhoFloat = sizeof(c);
    int tamanhoDouble = sizeof(d);

    printf("%d bytes\n", tamanhoInt);
    printf("%d bytes\n", tamanhoChar);
    printf("%d bytes\n", tamanhoFloat);
    printf("%d bytes\n", tamanhoDouble);

    system("pause");
    return 0;
}