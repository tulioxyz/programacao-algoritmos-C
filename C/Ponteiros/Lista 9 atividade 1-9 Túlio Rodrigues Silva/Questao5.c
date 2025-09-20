#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nomes[3][10];
    char (*p)[10] = nomes;

    for(int i=0; i<3; i++){
        printf("Insira o nome da posicao %d\n", i);
        scanf("%s", *(p+i));
    }
    printf("---\n");
    for(int i=0; i<3; i++){
        printf("%s\n", *(p+i));
    }

    system("pause");
    return 0;
}