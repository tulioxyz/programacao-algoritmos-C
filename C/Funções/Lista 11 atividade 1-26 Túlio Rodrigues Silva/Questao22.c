#include <stdio.h>
#include <stdlib.h>

int main()
{
    char v[8] = {'c', 'a', 'd', 'e', 'r', 'n', 'o'};
    char *p = v;

    for(int i=0; i<8; i++){
        printf("%c", *(p+i));
    }
    printf("\n");
    
    system("pause");
    return 0;
}