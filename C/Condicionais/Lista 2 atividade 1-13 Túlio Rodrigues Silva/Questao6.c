/*Escreva um programa que solicite ao usuário o valor do salário de um funcionário, calcule e exiba o salário bruto e o salário líquido,
aplicando as seguintes regras:*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salarioLiquido, salarioBruto, desconto;

    printf("Informe o valor da renumeracao: ");
    scanf("%d", &salarioBruto);

    if (salarioBruto < 1000)
    {
        desconto = (salarioBruto * 5/100);
        salarioLiquido = salarioBruto - desconto;

        printf("\n\tSALARIO BRUTO\t|DESCONTO\t|SALARIO LIQ.\n");
        printf("\t%d \t\t|%d(5%%) \t|%d\n\n", salarioBruto, desconto, salarioLiquido);
    }
    else
    {
        if (salarioBruto >= 1000 && salarioBruto < 5000)
        {
            desconto = (salarioBruto * 11/100);
            salarioLiquido = salarioBruto - desconto;

            printf("\n\tSALARIO BRUTO\t|DESCONTO\t|SALARIO LIQ.\n");
            printf("\t%d \t\t|%d(11%%) \t|%d\n\n", salarioBruto, desconto, salarioLiquido);
        }
        else
        {
            if (salarioBruto > 5000)
            {
                desconto = (salarioBruto * 25/100);
                salarioLiquido = salarioBruto - desconto;

                printf("\n\tSALARIO BRUTO\t|DESCONTO\t|SALARIO LIQ.\n");
                printf("\t%d \t\t|%d(25%%) \t|%d\n\n", salarioBruto, desconto, salarioLiquido);               
            }
        }
    }
    system("pause");
    return 0;    
}