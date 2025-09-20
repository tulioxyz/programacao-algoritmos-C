/*22.Escreva um programa que calcule a sequência de Fibonacci até o n-ésimo
termo, informado pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroTermos, cont = 0;
    int a = 0, b = 1, proximo;

    printf("Digite o numero de termos da sequencia de Fibonacci: ");
    scanf("%d", &numeroTermos);
    
    if (numeroTermos <= 0) 
    {
        printf("Por favor, digite um número inteiro positivo.\n");        
    }

    printf("Sequencia de Fibonacci com %d termos:\n", numeroTermos);

    while (cont < numeroTermos)
    {
        printf("%d ", a);
        proximo = a + b;
        a = b;
        b = proximo;
        cont++;
    }

    printf("\n");

    system("pause");
    return 0;    
}