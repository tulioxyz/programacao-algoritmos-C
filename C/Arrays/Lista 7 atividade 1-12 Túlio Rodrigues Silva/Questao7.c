#include <stdio.h>
#include <stdlib.h>

void definirMatriz (int matriz[][3], int linhas){
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor para a posicao [%d][%d]:\n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void matrizTransposta (int matriz[][3], int linhas, int transposta[][2]){
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < 3; j++){
            transposta[j][i] = matriz[i][j];
        }
    }
}

void imprimirAdaptavel(int linhas, int colunas, int matriz[linhas][colunas]) {
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}


int main() {
    int matriz[2][3];
    int transposta[3][2];
    definirMatriz(matriz, 2);
    matrizTransposta(matriz, 2, transposta);
    imprimirAdaptavel(2, 3, matriz);
    imprimirAdaptavel(3, 2, transposta);
     imprimirAdaptavel(3, 4, transposta);

    system("pause");
    return 0;
}