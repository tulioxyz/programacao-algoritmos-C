/*2. Escreva uma função que apresente um quadrado sólido de asteriscos cujo
lado é especificado no parâmetro inteiro side. Por exemplo, se side é 4, a
função exibe:*/

#include <stdio.h>
#include <stdlib.h>

void quadradoSolido (int side){
    for(int i = 1; i<=side; i++){
        for(int j = 1; j<=side; j++){
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