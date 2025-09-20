#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char nomes[3][30], menor[30];

    for(int i = 0; i<3; i++){
        printf("Insira o nome da posicao %d: ", i);
        scanf("%s", nomes[i]);
    }

    strcpy(menor, nomes[0]);

    if(strcmp(nomes[1], menor) < 0){
        strcpy(menor, nomes[1]);
    } 
    if (strcmp(nomes[2], menor) < 0){
        strcpy(menor, nomes[2]);
    }

    printf("Primeiro: %s\n", menor);

    system("pause");
    return 0;
}