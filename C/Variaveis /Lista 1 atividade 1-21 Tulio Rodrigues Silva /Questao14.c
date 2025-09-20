/*Faça um programa que receba três notas de um aluno e calcule a média
aritmética.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("(%.2f + %.2f + %.2f) / 3\n", nota1, nota2, nota3);
    printf("Sua media e: %.2f\n", media);

    system("pause");
    return 0;
}