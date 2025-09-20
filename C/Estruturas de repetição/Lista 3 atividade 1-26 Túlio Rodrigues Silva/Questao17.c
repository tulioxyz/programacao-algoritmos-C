/*17.Escreva um programa que solicite dois números inteiros ao usuário e  exiba todos os números entre eles, inclusive, em ordem 
crescente.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2, cont;

    printf("Insira dois numeros inteiros (Ex: 1 2, 8 2, 5 9): ");
    scanf("%d %d", &numero1, &numero2);

    if (numero1 < numero2)
    {
        cont = numero1;
    } else {
        cont = numero2;
    }

    printf("\nNumeros em ordem crescente\n");

    while (cont <= numero1 || cont <= numero2)
    {
        printf("\t%d\n", cont);
        cont++;
    }

    system("pause");
    return 0;    
}