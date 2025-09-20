/*Faça o mesmo da questão anterior usando SWITCH/CASE.*/

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

    switch (estadoCivil)
    {
    case 'C':
    case 'c':
        printf("Voce e casado(a)\n");
        break;
    case 'S':
    case 's':
        printf("Voce e solteiro(a)\n");
        break;
    case 'D':
    case 'd':
        printf("Voce e divorciado(a)\n");
        break;
    case 'V':
    case 'v':
        printf("Voce e viuvo(a)\n");
        break;
    default:
        printf("ERRO: letra invalida!\n");
        break;
    }
    
    system("pause");
    return 0;    
}