/*4. Implemente as seguintes funções com inteiros:
a. Função celsius retorna o equivalente Celsius de uma temperatura em
Fahrenheit.
b. Função fahrenheit retorna o equivalente Fahrenheit de uma
temperatura em Celsius.
c. Use essas funções para escrever um programa que imprima gráficos
mostrando os equivalentes em Fahrenheit de todas as temperaturas
Celsius de 0 a 100 graus, e os equivalentes em Celsius de todas as
temperaturas fahrenheit de 32 a 212 graus. Imprima as saídas em um
formato tabular que reduza o número de linhas de saída enquanto
continua sendo legível.*/

#include <stdio.h>
#include <stdlib.h>

int celsiusParaFahrenheit(int x){
    return (9 * x) / 5 + 32;
}
int fahrenheitParaCelsius(int y){
    return (5 * (y - 32)) / 9;
}


int main()
{
    int celsius = 0, fahrenheit = 32;

    printf("Celsius|Fahrenheit||Fahrenheit|Celsius\n");
    printf("--------------------------------------\n");

    while (celsius <= 100 ||fahrenheit <= 212){
        if (celsius <= 100){
            printf(" %3d   |   %3d    ", celsius, celsiusParaFahrenheit(celsius));
        } else {
            printf("                  ");
        }

        if (fahrenheit <= 212){
            printf("||    %3d   |   %3d\n", fahrenheit, fahrenheitParaCelsius(fahrenheit));    
        } else {
            printf("\n");
        }
        celsius++;
        fahrenheit++;
    }


    system("pause");
    return 0;
}