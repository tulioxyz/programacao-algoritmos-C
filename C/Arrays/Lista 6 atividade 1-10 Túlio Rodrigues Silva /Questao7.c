#include <stdio.h>
#include <stdlib.h>

void preencherVetor(int vetor[], int tamanho){
    for(int i = 0; i<tamanho; i++){
        printf("Digite um valor para a posicao %d\n", i);
        scanf("%d", &vetor[i]);
    }
}
void somarVetor(int vetor[], int tamanho){
    int soma = 0;
    for(int i = 0; i<tamanho; i++){
        soma = soma + vetor[i];
    }
    printf("A soma e %d\n", soma);
}

int main()
{
    int tamanho;

    printf("Insira o tamanho do vetor\n");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    preencherVetor(vetor, tamanho);
    somarVetor(vetor, tamanho);

    system("pause");
    return 0;
}