/*12.Escreva um programa que coloque na tela meia árvore de natal com  asteriscos. O número de ramos deverá ser introduzido pelo 
usuário. Exemplo: 4 
* 
** 
*** 
**** 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont = 1, cont2 = 1, numero;
   
    printf("Insira o numero de ramos: ");
     scanf("%d", &numero);
   
    while (cont <= numero)
    {
        cont2 = 1;

        while (cont2 <= cont)
        {
            printf("*");
            cont2++;
        }

        printf("\n");
        cont++;
    }

    system("pause");
    return 0;    
}