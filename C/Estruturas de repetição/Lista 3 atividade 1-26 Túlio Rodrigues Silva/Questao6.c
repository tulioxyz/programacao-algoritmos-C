/*6. Escreva um programa que some uma sequência de inteiros. Considere  que o primeiro inteiro lido com scanf especifique o
número de valores  restantes a serem inseridos. Seu programa deve ler apenas um valor toda  vez que scanf for executado.  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroValores, valores, cont = 1, acumulador = 0;

    printf("Insira a quantidade de valores que voce ira somar: ");
    scanf("%d", &numeroValores);

    while(cont <= numeroValores)
    {
        printf("Digite um valor: ");
        scanf("%d", &valores);

        acumulador = acumulador + valores;
        cont++;
    }

    printf("O valor da soma dos %d numeros e: %d\n", numeroValores, acumulador);

    system("pause");
    return 0;    
}