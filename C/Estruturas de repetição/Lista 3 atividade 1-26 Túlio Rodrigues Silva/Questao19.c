/*19.Escreva um programa que leia 10 números e conte quantos são positivos,  negativos e iguais a zero. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont = 1, positivos = 0, negativos = 0, zeros = 0, numero;

    while(cont <= 10)
    {
        printf("Digite um numero (O limite de numeros e 10: ");
        scanf("%d", &numero);
        cont++;

        if (numero == 0)
        {
            zeros++;
        } else if (numero < 0) {
            negativos++;
        } else {
            positivos++;
        }
    }

    printf("Voce inseriu:\n");
    printf("POSITIVOS: %d\n", positivos);
    printf("NEGATIVOS: %d\n", negativos);
    printf("ZEROS: %d\n", zeros);

    system("pause");
    return 0;    
}