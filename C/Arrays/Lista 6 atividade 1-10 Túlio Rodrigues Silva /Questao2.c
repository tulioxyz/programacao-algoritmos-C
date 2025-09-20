#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[6], soma = 0;

    for(int i = 0; i<6; i++){
        printf("Insira um numero: ");
        scanf("%d", &numeros[i]);
        soma = soma + numeros[i];
    }

    printf("Soma = %d\n", soma);

    system("pause");
    return 0;
}