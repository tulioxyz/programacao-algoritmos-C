/*Crie um programa que peça ao usuário a base e a altura de um retângulo e
calcule sua área.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int altura, base, area;

    printf("Digite o valor da base do retangulo: ");
    scanf("%d", &base);

    printf("Digite a altura do retangulo: ");
    scanf("%d", &altura);

    area = base * altura;

    printf("A = %d.%d\n", base, altura);
    printf("A base do retangulo e %d\n", area);

    system("pause");
    return 0;
}