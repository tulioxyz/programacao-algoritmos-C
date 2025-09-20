#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3][3];
    FILE* arquivo = fopen("Matriz.dat", "wb");
    if(arquivo == NULL){
        printf("Falha ao criar arquivo\n");
        return 1;
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Insira o numero da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    fwrite(matriz, sizeof(int), 9, arquivo);
    fclose(arquivo);

    system("pause");
    return 0;
}