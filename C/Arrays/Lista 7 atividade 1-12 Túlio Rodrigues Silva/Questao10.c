#include <stdio.h>
#include <stdlib.h>

void preencherIdentidade(int matriz[][3], int tamanho){
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            if(i == j)
                matriz[i][j] = 1;
            else
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
    int matriz[3][3];
    preencherIdentidade(matriz, 3);
    imprimirMatriz(matriz, 3);

    system("pause");
    return 0;
}