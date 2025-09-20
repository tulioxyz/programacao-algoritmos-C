/*Crie um programa que solicite ao usuário o salário de um funcionário e seu estado civil. O estado civil deve ser armazenado em uma 
variável do tipo char, onde:
'S' ou 's' representam solteiros, que terão um desconto de 10%.
'C' ou 'c' representam casados, que terão um desconto de 9%.
O programa deve calcular e exibir o valor final do salário após o desconto.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salarioBruto, salarioLiquido, desconto;
    char estadoCivil;

    printf("Informe sua renumeracao: ");
    scanf("%d", &salarioBruto);

    printf("Informe seu Estado civil (Utilize apenas o primeiro caracter)\n");
    printf("1 -> Solteiro (""S"" ou ""s"")\n");
    printf("2 -> Casado  (""C"" ou ""c"")\n");
    printf("Informe a opcao: ");
    scanf(" %c", &estadoCivil);

    if (estadoCivil == 'S' || estadoCivil == 's')
    {
        desconto = (salarioBruto * 10/100);
        salarioLiquido = salarioBruto - desconto;

        printf("\n\tSALARIO BRUTO\t|DESCONTO\t|SALARIO LIQ.\n");
        printf("\t%d \t\t|%d(10%%) \t|%d\n\n", salarioBruto, desconto, salarioLiquido);
    }
    else
    {
        if (estadoCivil == 'C' || estadoCivil == 'c')
        {
            desconto = (salarioBruto * 9/100);
            salarioLiquido = salarioBruto - desconto;

            printf("\n\tSALARIO BRUTO\t|DESCONTO\t|SALARIO LIQ.\n");
            printf("\t%d \t\t|%d(9%%) \t|%d\n\n", salarioBruto, desconto, salarioLiquido);
        }
        else
        {
            printf("ERRO: estado civil incorreto\n");
        }
    }


    system("pause");
    return 0;    
}