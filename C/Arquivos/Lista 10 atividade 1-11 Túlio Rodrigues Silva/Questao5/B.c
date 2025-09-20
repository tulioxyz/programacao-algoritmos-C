#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    FILE* arquivo = fopen("numero.dat", "rb");
    if(arquivo == NULL){
        printf("Falha no sistema\n");
        return 1;
    }
    fread(&num, sizeof(int), 1, arquivo);
    printf("%d\n", num);
    fclose(arquivo);

    system("pause");
    return 0;
}