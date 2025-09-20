#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetArmazenar[10];
    FILE* arquivo = fopen("Vetor.dat", "rb");
    if(arquivo == NULL){
        printf("Falha no sistema\n");
        return 1;
    }
    fread(&vetArmazenar, sizeof(int), 10, arquivo);
    for(int i=0; i<10; i++){
        printf("%d\n", vetArmazenar[i]);
    }
    fclose(arquivo);

    system("pause");
    return 0;
}