/*3. Escreva uma função que apresente um quadrado triangulo retângulo de
asteriscos cujo lados é especificado no parâmetro inteiro side.*/

#include <stdio.h>
#include <stdlib.h>

void quadradoSolido (int side){
    for(int i = 1; i<=side; i++){
        for(int j = 1; j<=i; j++){
            printf("*");
        }
    printf("\n");
    }
}

int main()
{
    int side;

    printf("insira um numero para ver quadrado solido de asteriscos: ");
    scanf("%d", &side);

    quadradoSolido(side);

    system("pause");
    return 0;
}