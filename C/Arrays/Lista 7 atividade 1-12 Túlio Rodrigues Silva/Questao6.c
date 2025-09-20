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

int quantosPares (int matriz[][3], int linhas){
    int pares = 0;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < 3; j++){
            if (matriz[i][j] % 2 == 0){
                pares++;
            }
        }
    }
    return pares;
}


int main() {
    int matriz[2][3];
    definirMatriz(matriz, 2);
    printf("A matriz tem %d pares!\n", quantosPares(matriz, 2));

    system("pause");
    return 0;
}