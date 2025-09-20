#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5];
    int *p = v;

    for(int i=0; i<5; i++){
        printf("Escreva numero para posicao %d: ", i);
        scanf("%d", &*(p+i));    
    }
    for(int i=0; i<5; i++){
        printf("%d\n", *(p+i));
    }
    
    system("pause");
    return 0;
}