/*Solicite ao usuário três valores que representam os lados de um triângulo e determine qual é o tipo de triângulo formado:
Equilátero → Todos os lados iguais
Isósceles → Dois lados iguais
Escaleno → Todos os lados diferentes*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lado1, lado2, lado3;
    
    printf("Insira os 3 valores dos lados do triangulo (Ex: 2 3 4): ");
    scanf("%d %d %d", &lado1, &lado2, &lado3);
    
    if (lado1 == lado2 && lado2 == lado3)
    {
        printf("Este triangulo e equilatero (todos lados sao iguais)\n\n");
    }
    else
    {
        if (lado1 == lado2 && lado2 != lado3 || lado2 == lado3 && lado3 != lado1 || lado1 == lado3 && lado3 !=  lado2)
        {
            printf("Este triangulo e isosceles (dois lados sao iguais)\n\n");
        }
        else
        {
            printf("Este triangulo e escaleno (todos os lados sao diferentes)\n\n");
        }
    }

    system("pause");
    return 0;    
}