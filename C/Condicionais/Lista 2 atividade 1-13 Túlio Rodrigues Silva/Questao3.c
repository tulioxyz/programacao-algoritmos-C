/*Crie um programa que solicite ao usuário dois números inteiros e os exiba em ordem crescente.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Informe dois numeros para alinhar em ordem crescente (Ex: 2 3)\n\n");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
    {
        printf("%d, %d\n\n", num2, num1);
    }
    else
    {
        printf("%d, %d\n\n", num1, num2);
    }

    system("pause");
    return 0;    
}