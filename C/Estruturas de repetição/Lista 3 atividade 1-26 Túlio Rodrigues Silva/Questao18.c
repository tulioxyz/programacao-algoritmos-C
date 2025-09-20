/*18.Escreva um programa que solicite dois números x e y para o usuário e em
seguida imprima o valor de x elevado a y.*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int x, y, resultado = 1, cont = 0;
   
    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y (apenas positivos): ");
    scanf("%d", &y);
    
    if (y < 0)
    {
        printf("ERRO: Apenas numeros positivos para y\n");        
    }   
    while (cont < y) 
    {
        resultado = resultado * x;
        cont++;
    }

    printf("%d elevado a %d = %d\n", x, y, resultado);

    system("pause");
    return 0;    
}