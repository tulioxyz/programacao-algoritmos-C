#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char palavra1[50], palavra2[50];

    printf("Insira uma palavra: ");
    fgets(palavra1, 50, stdin);
    printf("Insira outra palavra: ");
    fgets(palavra2, 50, stdin);

    printf("Palavra 1: %s", palavra1);
    printf("Palavra 2: %s", palavra2);
    strcmp(palavra1, palavra2)==0 ? printf("Sao iguais\n") : printf("Nao sao iguais\n");

    system("pause");
    return 0;
}