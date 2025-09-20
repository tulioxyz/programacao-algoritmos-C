#include <stdio.h>
#include <stdlib.h>

void preencherVetor(float vetor[], int tamanho){
    for(int i = 0; i<tamanho; i++){
        printf("Digite um valor para a posicao %d\n", i);
        scanf("%f", &vetor[i]);
    }
}

int somarVetor(float vetor[], int tamanho){
    float soma = 0;
    for(int i = 0; i<tamanho; i++){
        soma = soma + vetor[i];
    }
    return soma;
}

void exibirAcimaMedia(float vetor[], int tamanho, float media){
    for(int i = 0; i<tamanho; i++){
        if(vetor[i] > media){
            printf("%.2f - Essa nota esta acima da media!\n", vetor[i]);
        } else {
            printf("%.2f - Essa nota esta abaixo da media!\n", vetor[i]);
        }
    }
}

int main()
{
    int tamanho;
    float media, soma;

    printf("insira o tamanho do vetor: ");
    scanf("%d", &tamanho);

    float vetor[tamanho];
    preencherVetor(vetor, tamanho);

    soma = somarVetor(vetor, tamanho);
    media = soma / tamanho;
    
    printf("Media: %.2f\n", media);
    exibirAcimaMedia(vetor, tamanho, media);

    system("pause");
    return 0;
}