#include <stdio.h>
#include <stdlib.h>

int calcularDobro(int num){
    return num*2;
}

int main()
{
    int a = 3, b = 7, c = 10;

    printf("%d\n", calcularDobro(a));
    printf("%d\n", calcularDobro(b));
    printf("%d\n", calcularDobro(c));
   
    system("pause");
    return 0;
}