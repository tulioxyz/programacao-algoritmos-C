/*2. Desenvolva a função x_paraMaiscula que transforma um caractere (char)
minúsculo em sua correspondente maiúscula.
Dica: observe como os caracteres são organizados na tabela ASCII e como isso
permite fazer conversões matemáticas simples.*/

#include <stdio.h>
#include <stdlib.h>

int xParaMaiuscula (char caractere){
    if (caractere >= 'a' && caractere < 'z'){
        return caractere - 32;
    }
    return caractere;
}

int main()
{
    char caractere;

    printf("Insira um caractere: ");
    scanf("%c", &caractere);
    caractere = xParaMaiuscula(caractere);

    if (xParaMaiuscula(caractere)){
        printf("%c\n", caractere);
    }

    system("pause");
    return 0;
}