#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char frase[100];
    int acumulador = 0, tamanho;

    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    tamanho = strlen(frase);

    for(int i=0; i<tamanho; i++){
        if(frase[i] == ' ' && frase[i - 1] != ' ' && i > 0){
        acumulador++;
        } else {
        acumulador = acumulador;
        } 
    }

    acumulador++;

    printf("%s", frase);
    printf("%d palavras\n", acumulador);

    system("pause");
    return 0;
}