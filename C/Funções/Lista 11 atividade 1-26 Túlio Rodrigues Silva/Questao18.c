#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[5];
    int *p = num;

    for(int i=0; i<5; i++){
        printf("Insira numero da posicao %d: ", i);
        scanf("%d", (p+i));
    }
    for(int i=0; i<5; i++){
        printf("Valor %d: %d\n", i, *(p+i));
    }
   
    system("pause");
    return 0;
}