#include <stdio.h>
#include <stdlib.h>

void preencherVetor(int vetor[], int tamanho){
    for(int i = 0; i<tamanho; i++){
        printf("Digite um valor para a posicao %d\n", i);
        scanf("%d", &vetor[i]);
    }
}

void exibirVetor(int vetor[], int tamanho){
    printf("\nVetor:\n");
    for(int i = 0; i<tamanho; i++){
        printf("%d, ", vetor[i]);
    }
    printf("\n");
}

int somarVetor(int vetor[], int tamanho){
    int soma = 0;
    for(int i = 0; i<tamanho; i++){
        soma = soma + vetor[i];
    }
    return soma;
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
    int tamanho, opcao;


    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int vetor[tamanho];
    preencherVetor(vetor, tamanho);

    while(1){
        printf("\n\n\t---Biblioteca de Funcoes---\n\n");
        printf("1 -> Exibir vetor\n");
        printf("2 -> Somar vetor\n");
        printf("3 -> Maior valor vetor\n");
        printf("4 -> Contar pares vetor\n");
        printf("5 -> Inserir novos valores ao vetor\n\n");
        printf("0 -> Sair\n");
        printf("opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            exibirVetor(vetor, tamanho);
            break;
        case 2:
            printf("\nA soma do vetor e %d\n", somarVetor(vetor, tamanho));
            break;
        case 3:
            printf("\nO maior valor do vetor e o %d\n", maiorValor(vetor, tamanho));
            break;
        case 4:
            printf("\nNo vetor ha %d pares\n", contarPares(vetor, tamanho));
            break;
        case 5:
            printf("\nInsira o tamanho do vetor: ");
            scanf("%d", &tamanho);
            preencherVetor(vetor, tamanho);
            break;
        case 0:
            return 0;
        default:
            printf("\nERRO: Opcao invalida\n");
            break;
        }
    }

    system("pause");
    return 0;
}