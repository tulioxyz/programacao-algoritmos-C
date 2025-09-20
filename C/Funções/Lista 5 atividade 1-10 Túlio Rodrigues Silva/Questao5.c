/*5. Escreva uma função que retorne o menor de três números em ponto
flutuante.*/

#include <stdio.h>
#include <stdlib.h>

float menorValor (float x, float y, float z){
    if (x < y && x < z){
        return x;
    } else if (y < x && y < z){
        return y;
    } else {
        return z;
    }
}

int main()
{
    float num1, num2, num3;

    printf("Insira tres numeros para ver o menor dentre eles: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    printf("O menor e o %.1f\n", menorValor(num1, num2, num3));

    system("pause");
    return 0;
}