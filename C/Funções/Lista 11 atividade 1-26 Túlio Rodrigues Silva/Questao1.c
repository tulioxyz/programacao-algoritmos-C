#include <stdio.h>
#include <stdlib.h>

void imprimirLinha(){
    for(int i = 1; i<=20; i++){
        printf("*");
    }
    printf("\n");
}

int main()
{
    imprimirLinha();
    imprimirLinha();
    imprimirLinha();

    system("pause");
    return 0;
}