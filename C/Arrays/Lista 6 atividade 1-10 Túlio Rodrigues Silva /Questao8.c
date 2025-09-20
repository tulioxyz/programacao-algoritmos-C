#include <stdio.h>
#include <stdlib.h>

void preencherVetor(int vetor[], int tamanho){
    for(int i = 0; i<tamanho; i++){
        printf("Digite um valor para a posicao %d\n", i);
        scanf("%d", &vetor[i]);
    }
}

int maiorValor(int vetor[], int tamanho){
    int maior = vetor[0];
    for(int i = 0; i<tamanho; i++){
        if(vetor[i]>maior){
            maior = vetor[i];
        }
    }
    return maior;
}

int main()
{
    int tamanho;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];
    preencherVetor(vetor, tamanho);
    printf("O maior e o %d\n", maiorValor(vetor, tamanho));

    system("pause");
    return 0;
}