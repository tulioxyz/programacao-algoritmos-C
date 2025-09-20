/*Criar um programa que imprime uma descrição pessoal com várias
variáveis (int, float, char, long).
Declare uma variável do tipo int para armazenar a idade.
Declare uma variável do tipo char para armazenar a primeira letra do
nome.
Declare uma variável do tipo float para armazenar a altura.
Declare uma variável do tipo long para armazenar o número de telefone.
Imprima essas informações com uma mensagem formatada.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 18;
    char nomeP = 'T';
    float altura = 1.80;
    long long numero = 33988777328;

    printf("\nDados do usuario;\n");
    printf("Idade: %d\n", idade);
    printf("Primeira letra do nome: %c\n", nomeP);
    printf("Altura: %.2f\n", altura);
    printf("Numero: %lld\n\n", numero);
    
    system("pause");
    return 0;
}