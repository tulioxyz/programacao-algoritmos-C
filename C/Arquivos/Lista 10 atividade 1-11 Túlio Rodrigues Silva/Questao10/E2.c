#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas, colunas;
    printf("Insira o numero de linhas e colunas da sua matriz(ex: 1 2, 3 3): ");
    scanf("%d %d", &linhas, &colunas);
    int matriz[linhas][colunas];

    FILE* arquivo = fopen("matriz2.dat", "rb");
    if(arquivo == NULL){
        printf("Falha no sistema");
        return 1;
    }

    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            fread(matriz[i], sizeof(int), (linhas*colunas), arquivo);
        }
    }

    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    fclose(arquivo);
   
    system("pause");
    return 0;
}