#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char nome1[50], nome2[50], maior[50];
    int tamanho1, tamanho2;

    printf("Digite uma palavra ou nome: ");
    fgets(nome1, 50, stdin);
    printf("Digite uma palavra ou nome: ");
    fgets(nome2, 50, stdin);

    tamanho1 = strlen(nome1);
    tamanho2 = strlen(nome2);

    if (tamanho1 > tamanho2){
        strcpy(maior, nome1);
    } else {
        strcpy(maior, nome2);
    }

    printf("Caracteres: %d | Palavra 1: %s", tamanho1, nome1);
    printf("Caracteres: %d | Palavra 2: %s", tamanho2, nome2);
    printf("Maior: %s\n", maior);

    system("pause");
    return 0;
}