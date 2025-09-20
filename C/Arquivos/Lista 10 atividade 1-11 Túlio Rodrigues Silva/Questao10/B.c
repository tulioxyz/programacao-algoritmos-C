#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrizLer[3][3];
    FILE* arquivo = fopen("Matriz.dat", "rb");
    if(arquivo == NULL){
        printf("Falha no sistema");
        return 1;
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            fread(matrizLer[i], sizeof(int), 9, arquivo);
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d\t", matrizLer[i][j]);
        }
        printf("\n");
    }

    fclose(arquivo);

    system("pause");
    return 0;
}