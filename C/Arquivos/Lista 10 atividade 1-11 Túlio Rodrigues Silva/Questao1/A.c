#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* arquivo = fopen("frase.txt", "w");
    if(arquivo ==  NULL){
        printf("Falha ao abrir arquivo\n");
        return 1;
    }
    fprintf(arquivo, "Aprender C e essencial!\n");
    fclose(arquivo);

    system("pause");
    return 0;
}