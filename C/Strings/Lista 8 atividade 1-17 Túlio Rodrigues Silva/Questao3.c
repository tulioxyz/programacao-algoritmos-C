#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char origem[50], destino[50];

    printf("Insira uma palavra: ");
    fgets(origem, 50, stdin);
    strcpy(destino, origem);

    printf("Origem: %s", origem);
    printf("Destino: %s", destino);

    system("pause");
    return 0;
}