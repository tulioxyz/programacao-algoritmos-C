/*Utilize os caracteres especiais \n (nova linha) e \t (tabulação) para criar um programa que exiba a seguinte saída:*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("-------Gestao de Produtos-------\n\n");
    printf("1\t -> Cadastrar novo produto\n");
    printf("2\t -> Listar Produtos\n\n");
    printf("0\t -> Sair\n\n");
    printf("Opcao:\n");

    system("pause");
    return 0;    
}