#include <stdio.h>
#include <stdlib.h>

void preencherVetor(int vetor[], int tamanho){
    for(int i = 0; i<tamanho; i++){
        printf("Digite um valor para a posicao %d\n", i);
        scanf("%d", &vetor[i]);
    }
}

int contarPares(int vetor[], int tamanho){
    int pares = 0;
    for(int i = 0; i<tamanho; i++){
        if (vetor[i] % 2 == 0){
            pares++;
        }
    }
    return pares;
}

int main()
{
    int tamanho;

    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];
    preencherVetor(vetor, tamanho);
    printf("Existem %d valores pares no vetor\n", contarPares(vetor, tamanho));

    system("pause");
    return 0;
}