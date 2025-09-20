/*12.Crie um programa que solicite dois números inteiros do usuário e imprima
o resultado da soma e da subtração entre os dois números.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, soma, sub;

    printf("Digite numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    sub = num1 - num2;

    printf("Os resultados sao\n%d + %d = %.1d\n", num1, num2, soma);
    printf("%d - %d = %.1d\n", num1, num2, sub);

    system("pause");
    return 0;
}