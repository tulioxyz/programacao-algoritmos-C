#include <stdio.h>
#include <string.h>

int contarLetra(char *str, char letra) {
    int contador = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == letra) {
            contador++;
        }
        i++;
    }
    return contador;
}

int main() {
    char minhaString[] = "banana";
    char caractereProcurado = 'a';
    int ocorrencias = contarLetra(minhaString, caractereProcurado);
    printf("A letra '%c' aparece %d vezes na string \"%s\".\n",
           caractereProcurado, ocorrencias, minhaString);

    return 0;
}