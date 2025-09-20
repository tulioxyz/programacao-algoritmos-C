#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    FILE* arquivo = fopen("numero.dat", "wb");
    if(arquivo ==  NULL){
        printf("Falha ao abrir arquivo\n");
        return 1;
    }

    printf("Insira um numero inteiro: ");
    scanf("%d", &num);

    fwrite(&num, sizeof(int), 1, arquivo);
    fclose(arquivo);
    
    system("pause");
    return 0;
}