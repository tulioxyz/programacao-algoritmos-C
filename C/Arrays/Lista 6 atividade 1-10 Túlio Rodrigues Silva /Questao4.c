#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[10], contadorPares = 0;

    for(int i = 0; i<10; i++){
        printf("Digite  numero: ");
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 == 0){
            contadorPares++;
        }
    }

    printf("Foram encontrados %d numeros pares!\n", contadorPares);

    system("pause");
    return 0;
}