/*8. Desenvolva a função float max(float x, float y, float w) que retorna o maior dos
três valores.*/

#include <stdio.h>
#include <stdlib.h>

float max (float x, float y, float w){
    if (x > y && x > w){
        return x;
    } else if (y > x && y > w){
        return y;
    } else {
        return w;
    }
}

int main()
{
    float num1, num2, num3;

    printf("Insira tres valores para ver o maior:");
    scanf("%f %f %f", &num1, &num2, &num3);

    printf("O maior e %.2f\n", max(num1, num2, num3));

    system("pause");
    return 0;
}