#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, par = 0, impar = 0;

    for(int i = 1; i<=10; i++){
        printf("Insira o %d numero: ", i);
        scanf("%d", &num);
        if (num % 2 == 0){
            par++;
        } else {
            impar++;
        }
    }

    printf("%d numeros pares\n", par);
    printf("%d numeros impares\n", impar);

    system("pause");
    return 0;
}