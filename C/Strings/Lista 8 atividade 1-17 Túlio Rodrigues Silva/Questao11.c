#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int palindromo(char string[]) {
    int inicio = 0, fim = strlen(string) - 1;

    while (inicio < fim) {
        if (string[inicio] != string[fim]) {
            return 0; 
        }
        inicio++;
        fim--;
    }

    return 1; 
}

int main() {
    char palavra[30];

    printf("Insira uma palavra: ");
    fgets(palavra, 30, stdin);

    palavra[strcspn(palavra, "\n")] = '\0';

    if (palindromo(palavra) == 1) {
        printf("Sua palavra e palindromo\n");
    } else {
        printf("Sua palavra nao e palindromo\n");
    }

    system("pause");
    return 0;
}