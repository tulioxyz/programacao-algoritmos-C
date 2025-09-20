#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    int *p = &x;
    printf("%d\n", *p);
    *p = 20;
    printf("%d\n", x);
    
    system("pause");
    return 0;
}