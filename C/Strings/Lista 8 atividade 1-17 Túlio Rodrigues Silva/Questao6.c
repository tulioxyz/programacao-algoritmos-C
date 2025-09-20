#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char palavra[50];
    int tamanho, acumulador = 0;

    printf("Insira uma palavra: ");
    fgets(palavra, 50, stdin);

    tamanho = strlen(palavra);

    for(int i = 0; i<tamanho; i++){
        if (palavra[i] == ' ' || palavra[i] == '\n'){
            acumulador = acumulador;
        } else {
            acumulador++;
        }
    }

    printf("Nome: %s", palavra);
    printf("Caracteres: %d\n",acumulador);


    system("pause");
    return 0;
}