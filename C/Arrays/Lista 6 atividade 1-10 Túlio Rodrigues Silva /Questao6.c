#include <stdio.h>
#include <stdlib.h>

void preencherVetor(int vetor[], int tamanho){
    for(int i = 0; i<tamanho; i++){
        printf("Digite um valor para a posicao %d\n", i);
        scanf("%d", &vetor[i]);
    }
}
void exibirVetor(int vetor[], int tamanho){
    printf("Vetor:\n");
    for(int i = 0; i<tamanho; i++){
        printf("%d\t", vetor[i]);
    }
    printf("\n");
}

int main()
{
    int tamanho;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    preencherVetor(vetor, tamanho);
    exibirVetor(vetor, tamanho);

    system("pause");
    return 0;
}