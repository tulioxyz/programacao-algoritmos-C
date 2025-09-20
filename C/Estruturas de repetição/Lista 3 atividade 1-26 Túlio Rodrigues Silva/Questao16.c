/*16.Escreva um programa que imprima a tabuada de todos os números entre
1 e 9.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont = 1;

    while(cont <= 9)
    {
        printf("1 x%2d = %2d", cont, 1*cont);
        printf("\t2 x%2d = %2d", cont, 2*cont);
        printf("\t3 x%2d = %2d", cont, 3*cont);
        printf("\t4 x%2d = %2d", cont, 4*cont);
        printf("\t5 x%2d = %2d", cont, 5*cont);
        printf("\t6 x%2d = %2d", cont, 6*cont);
        printf("\t7 x%2d = %2d", cont, 7*cont);
        printf("\t8 x%2d = %2d", cont, 8*cont);
        printf("\t9 x%2d = %2d\n\n", cont, 9*cont);
        cont++;
    }
    system("pause");
    return 0;    
}