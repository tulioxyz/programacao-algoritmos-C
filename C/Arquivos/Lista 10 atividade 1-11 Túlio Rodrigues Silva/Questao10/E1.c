#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas, colunas;
    printf("Insira o numero de linhas e colunas da sua matriz(ex: 1 2, 3 3): ");
    scanf("%d %d", &linhas, &colunas);
    int matriz[linhas][colunas];

    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("Insira o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    FILE* arquivo = fopen("matriz2.dat", "wb");
    if(arquivo == NULL){
        printf("Falha ao criar arquivo");
        return 1;
    }

    fwrite(&matriz, sizeof(int), (linhas*colunas), arquivo);
    fclose(arquivo);
   
    system("pause");
    return 0;
}