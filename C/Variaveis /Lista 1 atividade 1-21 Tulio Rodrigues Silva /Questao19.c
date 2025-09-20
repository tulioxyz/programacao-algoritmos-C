/*Crie um programa que receba um número inteiro e exiba seu antecessor e
sucessor.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, antecessor, sucessor;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    antecessor = numero - 1;
    sucessor = numero + 1;

    printf("Antecessor: %d\nNumero: %d\nSucessor: %d\n", antecessor, numero, sucessor);

    system("pause");
    return 0;
}