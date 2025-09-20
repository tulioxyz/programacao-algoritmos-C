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

void imprimirMatriz(int matriz[][3], int linhas){
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void somarLinhas(int linhas, int colunas, int matriz[linhas][colunas]) {
    for (int i = 0; i < linhas; i++) {
        int soma = 0;
        for (int j = 0; j < colunas; j++) {
            soma = soma + matriz[i][j];
        }
        printf("Linha %d: %d\n", i, soma);
    }
}

int main() {
    int matriz[2][3];
    definirMatriz(matriz, 2);
    imprimirMatriz(matriz, 2);
    somarLinhas(2, 3, matriz);

    system("pause");
    return 0;
}