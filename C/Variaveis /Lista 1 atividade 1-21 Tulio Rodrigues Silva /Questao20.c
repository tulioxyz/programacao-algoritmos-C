/*Escreva um programa que peça ao usuário a distância (em km) e a
velocidade média (em km/h) de uma viagem. Depois, calcule o tempo
estimado de viagem usando a fórmula: Tempo = Distância / Velocidade*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float velocidade, distancia, tempo;
    
    printf("Indique a distancia em km: ");
    scanf("%f", &distancia);

    printf("Informe sua velocidade media: ");
    scanf("%f", &velocidade);

    tempo = distancia / velocidade;

    printf("T = %.1f / %.1f = %.2f\n", distancia, velocidade, tempo);
    printf("O tempo estimado e %.2f horas\n", tempo);

    system("pause");
    return 0;
}