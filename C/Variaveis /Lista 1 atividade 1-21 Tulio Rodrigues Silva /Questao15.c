/*Escreva um programa que receba uma temperatura em graus Celsius e a
converta para Fahrenheit. Use a fórmula: F = (C x 9/5) + 32*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int graus, fahrenheit;

    printf("Digite a temperatura em gruas Celsius C: ");
    scanf("%d", &graus);

    fahrenheit = (graus * 9/5) + 32;

    printf("F = (%d.9/5) + 32\n", graus);
    printf("F = %d\n", fahrenheit);

    system("pause");
    return 0;
}