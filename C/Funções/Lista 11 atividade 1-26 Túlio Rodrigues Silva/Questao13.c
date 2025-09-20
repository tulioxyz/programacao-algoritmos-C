#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char nome[5][30];

    for(int i=0; i<5; i++){
        printf("Insira um nome para posicao %d: ", i);
        fgets(nome[i], 30, stdin);
    }
    for(int i=4; i>=0; i--){
        printf("%s", nome[i]);
    }

    system("pause");
    return 0;
}