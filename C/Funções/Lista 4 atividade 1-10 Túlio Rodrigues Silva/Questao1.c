/*1. Crie a função x_ehDigito que verifique se um caractere (char) fornecido é um
dígito ('0' a '9'). Elabore um programa que leia caracteres do teclado e utilizando
a função para verificar, exiba se o caractere informado ó ou não um digito.*/

#include <stdio.h>
#include <stdlib.h>

int x_ehdigito (char caractere) {
    if (caractere >= 1 && caractere <= 9){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int valor;

    printf("insira:");
    scanf("%d", &valor);

    if (x_ehdigito(valor)){
        printf("%d eh digito\n", valor);
    } else {
        printf("%d nao e digito\n", valor);
    }

    system("pause");
    return 0;
}
    
    