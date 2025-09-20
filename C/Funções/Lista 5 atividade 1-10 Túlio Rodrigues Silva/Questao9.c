/*9. Faça uma função que recebe a média final de um aluno por parâmetro e
retorna o seu conceito, conforme a tabela abaixo:*/

#include <stdio.h>
#include <stdlib.h>

int mediaFinalAluno (float conceito){
    if (conceito <= 4.9){
        return 68;
    } else if (conceito >= 5 && conceito <= 6.9){
        return 67;
    } else if (conceito >= 7 && conceito <= 8.9){
        return 66;
    } else if (conceito >= 9 && conceito <= 10){
        return 65;
    } else {
        return 0;
    }
}

int main()
{
    float mediaFinal;

    printf("Insira a nota final do aluno: ");
    scanf("%f", &mediaFinal);

    printf("Nota\tConceito\n");
    printf("%.1f\t%c\n", mediaFinal, mediaFinalAluno(mediaFinal));

    system("pause");
    return 0;
}