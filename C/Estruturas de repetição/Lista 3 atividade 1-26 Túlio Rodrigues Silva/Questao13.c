/*13.Reescreva o programa anterior imprimando a árvore de natal de cabeça  para baixo. 
Exemplo: 4 
**** 
*** 
** 
*
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont = 1, cont2 = 1, numero;
   
    printf("Insira o numero de ramos: ");
     scanf("%d", &numero);

    cont = numero;
   
    while (cont >= 1)
    {
        cont2 = 1;

        while (cont2 <= cont)
        {
            printf("*");
            cont2++;
        }

        printf("\n");
        cont--;
    }

    system("pause");
    return 0;    
}