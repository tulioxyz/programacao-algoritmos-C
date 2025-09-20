#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char nome[30];
    int tamanho, acumulador = 0;

    printf("Insira um nome completo: ");
    fgets(nome, 30, stdin);

    tamanho = strlen(nome);

    for(int i = 0; i<tamanho; i++){
        if (nome[i] == ' ' || nome[i] == '\n'){
            acumulador = acumulador;
        } else {
            acumulador++;
        }
    }

    printf("NOME: %s", nome);
    printf("CARACTERES: %d\n", acumulador);
    printf("PRIMEIRA LETRA: %c\n", nome[0]);

    system("pause");
    return 0;
}