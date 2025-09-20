#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void removerQuebraDeLinha(char string[]){
    int tamanho = strlen(string);
    for(int i=0; i<tamanho; i++){
       if (tamanho > 0 && string[tamanho - 1] == '\n') {
        string[tamanho - 1] = '\0';
        }
    }
}

int main()
{
    char palavra[20];

    printf("Insira uma palavra: ");
    fgets(palavra, 20, stdin);

    removerQuebraDeLinha(palavra);

    printf("%s\n", palavra);

    system("pause");
    return 0;
}