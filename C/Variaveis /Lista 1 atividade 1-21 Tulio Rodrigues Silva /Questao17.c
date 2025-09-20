/*Faça um programa que peça o raio de um círculo e calcule o perímetro e a
área.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float raio, perimetro, area;

    printf("Informe o valor do raio do circulo: ");
    scanf("%f", &raio);

    perimetro = 2 * 3.14 * raio;
    area = 3.14 * (raio * raio);

    printf("O perimetro do circulo e %.2f\n", perimetro);
    printf("A area do circulo e %.2f\n", area);

    system("pause");
    return 0;
}