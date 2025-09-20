#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* arquivo = fopen("Vetor.dat", "rb");
    if(arquivo == NULL){
        printf("Falha no sistema\n");
        return 1;
    }
    fseek(arquivo, 0, SEEK_END);
    int tamanho = ftell(arquivo);
    int div = tamanho / sizeof(int);
    fclose(arquivo);
    printf("tamanho: %d\nQtd elementos: %d\n", tamanho, div);
    
    system("pause");
    return 0;
}