/*10.Desenvolva a função int eh_quadrado(int x, int y) que verifica se x é igual a y2.*/

#include <stdio.h>
#include <stdlib.h>

int eQuadrado (int x, int y){
    y = y*y;
    if (x == y){
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    int x, y;

    printf("Insira dois numeros: ");
    scanf("%d %d", &x, &y);

    if (eQuadrado(x, y)){
        printf("%d e igual  %d.%d = %d\n", x, y, y, y*y);
    } else {
        printf("%d e diferente de %d.%d = %d\n", x, y, y, y*y);
    }

    system("pause");
    return 0;
}