/*Criar uma "calculadora simples" que recebe dois números e imprime a
soma, subtração, multiplicação e divisão desses números.
Instruções: Declare duas variáveis do tipo int.
Inicialize as variáveis com valores diferentes.
Imprima a soma, subtração, multiplicação, divisão e módulo dessas
variáveis.
Exemplo de saída:
5+2 = 7
5-2 = 3*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5, y = 2;
    int soma = x + y, multi = x * y, div = x / y, sub = x - y;

    printf("Os resultados sao;\n\n");
    printf("%d + %d = %d\n", x, y, soma);
    printf("%d - %d = %d\n", x, y, sub);
    printf("%d * %d = %d\n", x, y, multi);
    printf("%d / %d = %d\n", x, y, div);

    system("pause");
    return 0;
}