#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* arquivo = fopen("Dados.dat", "rb+");
    if(arquivo == NULL){
        printf("Falha no sistema\n");
        return 1;
    }
    fseek(arquivo, 30 + 3*sizeof(float) + 30 + sizeof(float), SEEK_SET);
    float nota = 10.0;
    fwrite(&nota, sizeof(float), 1, arquivo);
    fclose(arquivo);

    arquivo = fopen("Dados.dat", "rb");
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