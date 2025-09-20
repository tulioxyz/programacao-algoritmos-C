#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* arquivo = fopen("frase.txt", "a");
    fprintf(arquivo, "Continuamos estudando arquivos.\n");
    fclose(arquivo);

    system("pause");
    return 0;
}