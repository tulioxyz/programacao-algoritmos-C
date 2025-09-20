/*5. Escreva um programa que solicite do usuário um número n e um  caractere. Em seguida, o programa deverá preencher n linhas, 
cada uma  com n caracteres. 
Numero: 4 
Caractere: * 
**** 
**** 
**** 
**** 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont = 1, cont2 = 1, numero;
    char caractere;

    printf("Insira o numero desejado: ");
     scanf("%d", &numero);
    printf("Insira o caractere desejado: ");
     scanf(" %c", &caractere);

    while (cont <= numero)
    {
        cont2 = 1;

        while (cont2 <= numero)
        {
            printf("%c", caractere);
            cont2++;
        }

        printf("\n");
        cont++;
        
    }
    
    system("pause");
    return 0;    
}