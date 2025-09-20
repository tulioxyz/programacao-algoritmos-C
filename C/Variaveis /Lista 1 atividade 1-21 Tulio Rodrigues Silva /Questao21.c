/*Crie um programa que peça ao usuário seu peso (kg) e altura (m) e calcule
seu Índice de Massa Corporal (IMC):*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, altura, imc;

    printf("Informe seu peso em kg: ");
    scanf("%f", &peso);

    printf("Informe sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("%.1f / (%.2f . %.2f) = %.1f\n", peso, altura, altura, imc);
    printf("Seu IMC e %.1f\n", imc);

    system("pause");
    return 0;
}