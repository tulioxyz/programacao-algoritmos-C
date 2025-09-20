#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char mensagem[100];
    FILE* arquivo = fopen("mensagem.txt", "w");
    if(arquivo ==  NULL){
        printf("Falha ao abrir arquivo\n");
        return 1;
    }

    printf("Insira uma mensagem para ser codificada: ");
    fgets(mensagem, 100, stdin);
    fprintf(arquivo, "%s\n", mensagem);
    fclose(arquivo);

    arquivo = fopen("mensagem.txt", "r");
    if(arquivo == NULL){
        printf("Falha no sistema\n");
        return 1;
    }

    FILE* codificado = fopen("codificado.txt", "w");
    if(codificado ==  NULL){
        printf("Falha ao abrir arquivo\n");
        return 1;
    }

    char c;
    while ((c = fgetc(arquivo)) != EOF) {
        if (c == ' ' || c == '\n') {
            fputc(c, codificado);  
        } else {
            fputc(c + 1, codificado);  
        }
    }
    fclose(arquivo);
    fclose(codificado);

    system("pause");
    return 0;
}