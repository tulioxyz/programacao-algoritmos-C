#include <stdio.h>
#include <stdlib.h>

void preencherVetor(int vetor[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

void copiarVetor(int origem[], int destino[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        destino[i] = origem[i];
    }
}

void imprimirVetor(int vetor[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main(){
    int tamanho = 5;
    int vetorOrigem[5];
    int vetorDestino[5];

    preencherVetor(vetorOrigem, tamanho);
    copiarVetor(vetorOrigem, vetorDestino, tamanho);

    printf("Vetor origem: ");
    imprimirVetor(vetorOrigem, tamanho);

    printf("Vetor destino: ");
    imprimirVetor(vetorDestino, tamanho);

    system("pause");
    return 0;
}