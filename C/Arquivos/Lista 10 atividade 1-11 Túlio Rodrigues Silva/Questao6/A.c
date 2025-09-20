#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10];
    FILE* arquivo = fopen("Vetor.dat", "wb");
    if(arquivo ==  NULL){
        printf("Falha ao abrir arquivo\n");
        return 1;
    }

    for(int i=0; i<10; i++){
        vet[i] = i+i;
    }
    
    fwrite(&vet, sizeof(int), 10, arquivo);
    fclose(arquivo);

    system("pause");
    return 0;
}