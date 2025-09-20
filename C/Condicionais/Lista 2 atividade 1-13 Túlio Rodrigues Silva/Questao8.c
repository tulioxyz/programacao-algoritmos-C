/*Faça o mesmo que a questão anterior, mas usando o operador ternário.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salarioBruto, salarioLiquido, desconto;
    char estadoCivil;

    printf("Informe sua renumeracao: ");
    scanf("%d", &salarioBruto);

    printf("Informe seu Estado civil (Utilize apenas o primeiro caracter)\n");
    printf("1 -> Solteiro (\"S\" ou \"s\")\n");
    printf("2 -> Casado  (\"C\" ou \"c\")\n");
    printf("Informe a opcao: ");
    scanf(" %c", &estadoCivil);

    desconto = (estadoCivil == 'S' || estadoCivil == 's') ? (salarioBruto * 10/100) :
               (estadoCivil == 'C' || estadoCivil == 'c') ? (salarioBruto * 9/100) : 0;

    salarioLiquido = salarioBruto - desconto;

    if (desconto > 0) 
    {
        printf("\n\tSALARIO BRUTO\t|DESCONTO\t|SALARIO LIQ.\n");
        printf("\t%d \t\t|%d(%d%%) \t|%d\n\n", salarioBruto, desconto, (estadoCivil == 'S' || estadoCivil == 's') ? 10 : 9, salarioLiquido);
    } 
    else
    {
        printf("ERRO: estado civil invalido\n");
    }

    system("pause");
    return 0;
}    