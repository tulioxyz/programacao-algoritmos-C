/*Usando IF/ELSE, crie um programa que solicite ao usuário que informe seu estado civil por meio de uma única letra. O sistema deve
identificar e exibir o estado civil correspondente. Caso a letra informada não corresponda a um estado civil válido, o programa deve
exibir uma mensagem informando que a entrada é inválida.
C,c Casado
S,s Solteiro
D,d Divorciado
V,v Viúvo*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char estadoCivil;

    printf("------Informe o seu Estado Civil------\n\n");
    printf("Utilize apenas o primeiro caracter correspondente\n");
    printf("1 -> Casado (C ou c)\n");
    printf("2 -> Solteiro (S ou s)\n");
    printf("3 -> Divorciado (D ou d)\n");
    printf("4 -> Viuvo (V ou v)\n");

    printf("Digite a opcao: ");
    scanf("%s", &estadoCivil);

    if (estadoCivil == 'C' || estadoCivil == 'c')
    {
        printf("Voce e casado(a)\n");
    }
    else
    {
        if (estadoCivil == 'S' || estadoCivil == 's')
        {
            printf("Voce e solteiro(a)\n");
        }
        else
        {
            if (estadoCivil == 'D' || estadoCivil == 'd')
            {
                printf("Voce e divorciado(a)\n");
            }
            else
            {
                if (estadoCivil == 'V' || estadoCivil == 'v')
                {
                    printf("Voce e viuvo(a)\n");
                }
                else
                {
                    printf("ERRO: letra invalida!\n");
                }
            }
        }
    }
    
    system("pause");
    return 0;    
}