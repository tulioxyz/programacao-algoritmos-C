#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5] = {10, 20, 30, 40, 50};
    FILE* arquivo = fopen("numeros.txt", "w");
    if(arquivo ==  NULL){
        printf("Falha ao abrir arquivo\n");
        return 1;
    }

    for(int i=0; i<5; i++){
        fprintf(arquivo, "%d\n", v[i]);
    }
    fclose(arquivo);

    system("pause");
    return 0;
}