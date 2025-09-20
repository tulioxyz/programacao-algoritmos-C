/*6. Implemente a função int abs(int x) que devolve o valor absoluto de um número.
O valor absoluto de um número é a sua distância em relação a zero na reta
numérica, e é sempre um valor positivo. Por exemplo, o valor absoluto de +5
e -5 é 5, pois ambos estão a 5 unidades de distância do zero.*/

#include <stdio.h>
#include <stdlib.h>

int absolut(int x){
    if (x >= 0) {
        return x;
    } else if (x < 0) {
        x = x * -1;
        return x;
    }
}

int main()
{
    int num;

    printf("Insira um numero para saber seu valor absoluto: ");
    scanf("%d", &num);

    printf("O valor absoluto de %d e %d\n", num, absolut(num));

    system("pause");
    return 0;
}