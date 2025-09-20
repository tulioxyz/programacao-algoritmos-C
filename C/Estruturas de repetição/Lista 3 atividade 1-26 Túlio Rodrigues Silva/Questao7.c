/*7. Escreva um programa que calcule e imprima a média de vários inteiros.  Considere que o último valor lido com scanf seja a 
sentinela 0. Uma  sequência de entrada típica poderia ser 10 8 11 7 9 0 indicando que é  preciso calcular a média de todos os 
valores anteriores a 0. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int acumulador = 0, quantidadeNumeros = 0, numero;
    float media;

    printf("\n\tDescubra a media de varios numeros\n\n");
    
    while(numero != 0)
    {
        printf("Insira um numero: ");
        scanf("%d", &numero);

        if (numero == 0)
        {
            break;
        }

        acumulador = acumulador + numero;
        quantidadeNumeros++;
    }

    media = acumulador / quantidadeNumeros;

    printf("Media = %d / %d\n", acumulador, quantidadeNumeros);
    printf("A media dos numeros que voce inseriu e: %.1f\n", media);

    system("pause");
    return 0;    
}