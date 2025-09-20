/*Escreva um programa que solicite a idade do usuário e exiba sua classificação conforme a tabela:
Menor que 12 anos → Criança
De 12 a 17 anos → Adolescente
De 18 a 59 anos → Adulto
60 anos ou mais → Idoso*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    printf("Insira sua idade para saber sua classificacao: ");
    scanf("%d", &idade);

    if (idade < 12)
    {
        printf("(Crianca)\n\n");
    }
    else
    {
        if (idade >= 12 && idade <= 17)
        {
            printf("(Adolescente)\n\n");
        }
        else
        {
            if (idade >= 18 && idade <= 59)
            {
                printf("(Adulto)\n\n");
            }
            else
            {
                if (idade > 60)
                {
                    printf("(Idoso)\n\n");
                }
            }
        }
    }
    system("pause");
    return 0;    
}