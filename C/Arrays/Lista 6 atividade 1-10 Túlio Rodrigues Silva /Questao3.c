#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[8], maior;

    for(int i = 0; i<8; i++){
        printf("Insira numero: ");
        scanf("%d", &numeros[i]);        
    }
    maior = numeros[0];
    for(int i = 0; i<8; i++){
        if(numeros[i]>maior){
            maior = numeros[i];
        }
    }
    printf("O numero maior e %d\n", maior);

    system("pause");
    return 0;
}