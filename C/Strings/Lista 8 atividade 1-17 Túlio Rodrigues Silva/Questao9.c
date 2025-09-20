#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char nomes[5][30];

    for(int i = 0; i<5; i++){
        printf("Insira o nome da posicao %d: ", i);
        scanf("%s", nomes[i]);
    }

    for(int i = 4; i>=0; i--){
        printf("Posicao %d: %s\n", i, nomes[i]);
    }
    
    system("pause");
    return 0;
}