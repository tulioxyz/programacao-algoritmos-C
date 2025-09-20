#include <stdio.h>
#include <stdlib.h>

int ehPar(int num){
    if (num % 2 == 0){
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    int num;

    printf("Insira um numero: ");
    scanf("%d", &num);

    if (ehPar(num) == 1){
        printf("Seu numero e par\n");
    } else {
        printf("Seu numero nao e par\n");
    }

    system("pause");
    return 0;
}