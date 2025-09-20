#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nomes[5][10];
    char (*p)[10] = nomes;

    for (int i = 0; i < 5; i++) {
        printf("Insira o nome da posicao %d: ", i);
        scanf("%9s", p[i]);
    }

    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("Nome: %s, Letras: %d\n", p[i], strlen(p[i]));
    }

    system("pause");
    return 0;
}