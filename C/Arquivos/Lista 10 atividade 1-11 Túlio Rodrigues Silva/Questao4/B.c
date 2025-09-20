#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE* codificado = fopen("codificado.txt", "r");
    if(codificado == NULL){
        printf("Falha no sistema\n");
        return 1;
    }

    FILE* descodificando = fopen("descodificado.txt", "w");
    if(descodificando ==  NULL){
        printf("Falha ao abrir arquivo\n");
        return 1;
    }

    char c2;
    while((c2 = fgetc(codificado)) != EOF){
        if(c2 == ' ' || c2 == '\n'){
            fputc(c2, descodificando);
        } else {
            fputc(c2 - 1, descodificando);
        }
    }
    fclose(codificado);
    fclose(descodificando);

    system("pause");
    return 0;
}