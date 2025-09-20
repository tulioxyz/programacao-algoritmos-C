/*1. Um estacionamento cobra uma tarifa mínima de R$ 2,00 por uma permanência
de até três horas, e R$ 0,50 adicionais por hora para cada hora, ou parte dela,
por até três horas. A tarifa máxima para qualquer período de 24 horas é de R$
10,00. Suponha que nenhum carro estacione por mais de 24 horas de cada vez.
Escreva um programa que calcule e imprima as tarifas de estacionamento para
cada um dos três clientes que utilizaram esse estacionamento ontem. Você
deverá informar as horas de permanência de cada cliente. Seu programa deverá
imprimir os resultados em um formato tabular e deverá calcular e imprimir o
total recebido ontem. O programa deverá usar a função calcularTaxas para
determinar o valor devido por cliente. Sua saída deverá aparecer no seguinte
formato:*/

#include <stdio.h>
#include <stdlib.h>

float calcularTaxas (float horasPermanecidas){
    float taxaMinima = 2.0;

    if (horasPermanecidas>=24.0) {
        taxaMinima = 10.0;
    } else if (horasPermanecidas>3.0){
        float horasExtras = horasPermanecidas - 3;
        taxaMinima += horasExtras * 0.50; 
    } 
    return taxaMinima;
}

int main()
{
    float horas1, horas2, horas3;

    printf("Insira o tempo permanecido do primeiro carro: ");
     scanf("%f", &horas1);
    printf("Insira o tempo permanecido do segundo carro: ");
     scanf("%f", &horas2);
    printf("Insira o tempo permanecido do terceiro carro: ");
     scanf("%f", &horas3);

    printf("Carro\tHoras\tTaxa\n");
    printf("1\t%.1f\t%.2f\n", horas1, calcularTaxas(horas1));
    printf("2\t%.1f\t%.2f\n", horas2, calcularTaxas(horas2));
    printf("3\t%.1f\t%.2f\n", horas3, calcularTaxas(horas3));
    printf("TOTAL\t%.1f\t%.2f\n", horas1+horas2+horas3, calcularTaxas(horas1)+calcularTaxas(horas2)+calcularTaxas(horas3));

    system("pause");
    return 0;
}