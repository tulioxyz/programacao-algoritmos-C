#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nomes[3][30];
    float notas[3][3];
    FILE* arquivo = fopen("Dados.dat", "wb");
    if(arquivo ==  NULL){
        printf("Falha ao abrir arquivo\n");
        return 1;
    }

    for(int i=0; i<3; i++){
        printf("Insira o nome do aluno %d: ", i);
        scanf("%s", nomes[i]);
        for(int j=0; j<3; j++){
            printf("Insira notas de %s(Uma por uma): ", nomes[i]);
            scanf("%f", &notas[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        fwrite(nomes[i], sizeof(char), 30, arquivo);   
        fwrite(notas[i], sizeof(float), 3, arquivo);
    }
    fclose(arquivo);

    system("pause");
    return 0;
}