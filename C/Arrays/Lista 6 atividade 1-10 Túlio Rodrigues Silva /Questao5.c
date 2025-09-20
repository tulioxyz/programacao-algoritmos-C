#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas[5], soma = 0, media;

    for(int i = 0; i<5; i++){
        printf("Insira numero: ");
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }
    media = soma / 5;
    printf("A media e %.2f\n", media);
    for(int i = 0; i<5; i++){
        if(notas[i] > media){
            printf("%.2f - Essa nota esta acima da media!\n", notas[i]);
        }
    }
    
    system("pause");
    return 0;
}