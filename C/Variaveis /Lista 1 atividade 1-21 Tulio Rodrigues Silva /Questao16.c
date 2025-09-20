/*16.Crie um programa que peça ao usuário o valor de um produto e o valor
pago. O programa deve calcular e exibir o troco.
Ex:
Digite o valor do produto: 15.50
Digite o valor pago: 20.00*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, pago, troco;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("Quanto o cliente deu em dinheiro: ");
    scanf("%f", &pago);

    troco = pago - valor;

    printf("%.2f - %.2f = %.2f\n", pago, valor, troco);
    printf("Devolva ao cliente %.2f reais\n", troco);

    system("pause");
    return 0;
}