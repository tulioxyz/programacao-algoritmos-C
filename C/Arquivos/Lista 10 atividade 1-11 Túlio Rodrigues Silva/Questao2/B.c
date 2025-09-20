#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* arquivo = fopen("numeros.txt", "r");
    if(arquivo == NULL){
        printf("Falha no sistema\n");
        return 1;
    }

    int numero;
    while (fscanf(arquivo, "%d", &numero) != EOF){
        printf("%d\n", numero);
    }
    fclose(arquivo);

    
    system("pause");
    return 0;
}