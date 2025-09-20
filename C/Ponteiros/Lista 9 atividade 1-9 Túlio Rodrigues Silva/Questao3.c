#include <stdio.h>
#include <stdlib.h>

void dobrar(int *n){
    *n = *n * 2;
}

int main()
{
    int a = 5;
    dobrar(&a);
    printf("%d\n", a);

    system("pause");
    return 0;
}