#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char palavra[50];

    printf("Digite uma palavra: ");
    fgets(palavra, 50, stdin);

    int tamanho = strlen(palavra) - 1;

    for(int i = 0; i<tamanho; i++){
        printf("Indice %d: %c\n", i, palavra[i]);
    }

    system("pause");
    return 0;
}