/*7. Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o
seu volume (V = (4/3) * π * r3).*/

#include <stdio.h>
#include <stdlib.h>

float calcularVolume(float raio){
    float volume = (4.00 / 3.00) * 3.14 * (raio * raio * raio);
    return volume;
}

int main()
{
    float raio;

    printf("Digite o raio da esfera para ver o seu volume: ");
    scanf("%f", &raio);

    printf("O volume e %.2f\n", calcularVolume(raio));

    system("pause");
    return 0;
}