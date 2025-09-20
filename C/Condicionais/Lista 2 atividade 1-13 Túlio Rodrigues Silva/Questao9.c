/*Escreva um programa que leia cinco inteiros e ao fim imprima o maior e o menor inteiro no grupo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, num4, num5;
    int numeroMaior, numeroMenor;

    printf("Insira 5 numeros (Ex: 1 2 3 4 5): ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    numeroMaior = num1;
    numeroMenor = num1;
    
    if (num2 > numeroMaior) numeroMaior = num2;
    if (num2 < numeroMenor) numeroMenor = num2;

    if (num3 > numeroMaior) numeroMaior = num3;
    if (num3 < numeroMenor) numeroMenor = num3;

    if (num4 > numeroMaior) numeroMaior = num4;
    if (num4 < numeroMenor) numeroMenor = num4;

    if (num5 > numeroMaior) numeroMaior = num5;
    if (num5 < numeroMenor) numeroMenor = num5;

    printf("%d, %d, %d, %d, %d\n", num1, num2, num3, num4, num5);
    printf("O menor e %d|O maior e %d\n\n", numeroMenor, numeroMaior);
    system("pause");
    return 0;    
}