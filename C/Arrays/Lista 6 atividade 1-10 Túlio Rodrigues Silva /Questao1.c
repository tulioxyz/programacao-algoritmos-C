#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[5];

    for(int i = 0; i<5; i++){
        printf("Insira um numero: ");
        scanf("%d", &numeros[i]);
    }
    for (int i = 0; i<5; i++){
        printf("%d\n", numeros[i]);
    }

    system("pause");
    return 0;
}