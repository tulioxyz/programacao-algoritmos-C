#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;
    int *p = &x;
    int **pp = &p;
    printf("%d\n", **pp);

    system("pause");
    return 0;
}