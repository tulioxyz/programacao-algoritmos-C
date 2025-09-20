/*3. Implemente a função pot(float x, int n) que calcula x
n, retornando um valor do tipo float.*/

#include <stdio.h>
#include <stdlib.h>

float pot (float x, int n){
    float acumulador = 1;

    for(int i = 0; i < n; i++){
        acumulador = acumulador * x;
    }
    return acumulador;
}

int main()
{
    float resultado;

    resultado = pot(2, 3);

    printf("O resultado e %.2f\n", resultado);
    

    system("pause");
    return 0;
}