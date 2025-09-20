#include <stdio.h>
#include <stdlib.h>

void preencher(int *v){
    for(int i=0; i<3; i++){
        printf("Insira numero da posicao %d: ", i);
        scanf("%d", (v+i));
    }

    for(int i=0; i<3; i++){
            printf("%d\n", *(v+i));
    }
}

int main()
{
    int v[3];
    preencher(v);

    system("pause");
    return 0;
}