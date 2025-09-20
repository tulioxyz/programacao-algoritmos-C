/*Em um programa, declare uma variável “a” do tipo int, atribua o valor 10,
declare uma segunda variável “b” e atribua a ela o valor de “a”. Imprima o
valor de “a” e também de “b”.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int b = a;

    printf("a = %d\n\n", b);

    system("pause");
    return 0;
}