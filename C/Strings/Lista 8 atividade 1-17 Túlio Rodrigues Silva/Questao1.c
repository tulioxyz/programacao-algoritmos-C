#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char nome[50];

    printf("Digite seu nome utilizando espacos: ");
    fgets(nome, 50, stdin);

    printf("Nome: %s", nome);

    system("pause");
    return 0;
}