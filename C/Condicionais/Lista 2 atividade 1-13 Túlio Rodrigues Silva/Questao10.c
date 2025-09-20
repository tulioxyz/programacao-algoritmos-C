/*Escreva um programa em C que solicite ao usuário seu peso (em kg) e sua altura (em metros). O programa deve calcular o Índice de Massa 
Corporal (IMC) utilizando a fórmula:
Em seguida, o programa deve exibir o IMC calculado e classificar o resultado conforme a tabela abaixo:
IMC < 18.5 → Abaixo do peso
18.5 ≤ IMC < 24.9 → Peso normal
25.0 ≤ IMC < 29.9 → Sobrepeso
IMC ≥ 30.0 → Obesidade*/

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

    if (imc < 18.5)
    {
        printf("Voce esta classificado como (Abaixo do peso)\n\n");
    }
    else
    {
        if (imc >= 18.5 && imc < 24.9)
        {
            printf("Voce esta classificado como (Peso normal)\n\n");
        }
        else
        {
            if (imc >= 25 && imc < 29.9)
            {
                printf("Voce esta classificado como (Sobrepeso)\n\n");
            }
            else
            {
                if (imc > 30.0)
                {
                    printf("Voce esta classificado como (Obesidade)\n\n");
                }
            }
        }
    }

    system("pause");
    return 0;    
}