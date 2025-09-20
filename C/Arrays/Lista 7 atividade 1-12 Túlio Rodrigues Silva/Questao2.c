#include <stdio.h>
#include <stdlib.h>

void definirMatriz (int matriz[][3], int linhas){
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < 3; j++){
            matriz[i][j] = 0;
        }
    }
}

void imprimirMatriz(int matriz[][3], int linhas){
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[2][3];
    definirMatriz(matriz, 2);
    imprimirMatriz(matriz, 2);

    system("pause");
    return 0;
}