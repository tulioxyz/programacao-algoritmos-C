#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5];

    for(int i = 0; i<5; i++){
        printf("Insira numero da posicao %d: ", i);
        scanf("%d", &v[i]); 
    }
    for(int i = 4; i>=0; i--){
        printf("%d\n", v[i]);
    }

    system("pause");
    return 0;
}