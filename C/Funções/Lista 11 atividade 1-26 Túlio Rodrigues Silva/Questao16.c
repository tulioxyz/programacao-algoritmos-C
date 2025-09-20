#include <stdio.h>
#include <stdlib.h>

void dobrarValor(int *p){
    printf("%d\n", (*p)*2);
}

int main()
{
   int x = 10;
   int *p = &x;
   dobrarValor(p);

    system("pause");
    return 0;
}