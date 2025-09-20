#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int buscarNome (char nomes[][30], int qtd, char alvo[]){
    for(int i=0; i<qtd; i++){
        if(strcmp(nomes[i], alvo) == 0){
            return i;
        } 
    }
    return -1;
}

int main()
{
    char nomes[5][30], procurado[30];
    
    for(int i=0; i<5; i++){
        printf("Insira um nome para a posicao %d: ", i);
        scanf("%s", nomes[i]);
    }

    printf("Procurar nome: ");
    scanf("%s", procurado); 

    if (buscarNome(nomes, 5, procurado) == -1){
        printf("Nao encontrado!\n");
    } else {
        printf("Nome encontrado!\n");
    }

    system("pause");
    return 0;
}