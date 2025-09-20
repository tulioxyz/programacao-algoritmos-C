#include <stdio.h>
#include <stdlib.h>

float mediaVetor(float v[], int tamanho){
    int media, soma = 0;
    for(int i=0; i<tamanho; i++){
        soma = soma + v[i];
    }
    media = soma / tamanho;
    return media;
}

int main()
{
    int tamanho;
    float media;

    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tamanho);

    float v[tamanho];

    for(int i=0; i<tamanho; i++){
        printf("Insira o numero da posicao %d: ", i);
        scanf("%f", &v[i]);
    }

    media = mediaVetor(v, tamanho);
    printf("A media dos valores e %.1f\n", media);

    system("pause");
    return 0;
}