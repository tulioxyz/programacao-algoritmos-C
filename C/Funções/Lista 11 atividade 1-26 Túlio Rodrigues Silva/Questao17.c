#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    int x = 5, y = 10;
    int *p = &x, *q = &y;

    printf("Valor x: %d\tEndereco x: %p\n", *p, p);
    printf("Valor y: %d\tEndereco y: %p\n", *q, q);

    system("pause");
    return 0;
}