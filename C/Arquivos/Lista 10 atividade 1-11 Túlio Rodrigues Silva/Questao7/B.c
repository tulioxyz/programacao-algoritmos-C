#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* arquivo = fopen("Dados.dat", "rb");
    if(arquivo == NULL){
        printf("Falha no sistema\n");
        return 1;
    }
    char nomeArmazenar[3][30];
    float notaArmazenar[3][3];
    for (int i = 0; i < 3; i++) {
        fread(nomeArmazenar[i], sizeof(char), 30, arquivo);   
        fread(notaArmazenar[i], sizeof(float), 3, arquivo);
    }
    for(int i=0; i<3; i++){
        printf("%s\t", nomeArmazenar[i]);
        for(int j=0; j<3; j++){
            printf("%.1f\t", notaArmazenar[i][j]);
        }
        printf("\n");
    }
    fclose(arquivo);


    system("pause");
    return 0;
}