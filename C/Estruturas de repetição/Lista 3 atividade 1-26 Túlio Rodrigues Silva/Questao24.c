/*24.Escreva um programa que leia uma sequência de números inteiros e  conte quantos números pares e ímpares foram inseridos. 
O programa  encerra quando o número 0 for digitado. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pares = 0, impares = 0, numero;

    while(1)
    {
        printf("Insira um numero (Caso queira parar digite 0): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        } else if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        } 
    }

    printf("Voce inseriu:\n");
    printf("PARES: %d\nIMPARES: %d\n", pares, impares);

    system("pause");
    return 0;    
}