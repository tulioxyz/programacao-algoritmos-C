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

int somarMatriz (int matriz[][3], int linhas){
    int soma = 0;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < 3; j++){
            soma = soma + matriz[i][j];
        }
    }
    return soma;
}

int main() {
    int matriz[2][3];
    definirMatriz(matriz, 2);
    printf("%d\n", somarMatriz(matriz, 2));

    system("pause");
    return 0;
}