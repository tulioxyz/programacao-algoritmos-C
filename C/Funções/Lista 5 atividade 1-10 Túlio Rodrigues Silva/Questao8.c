/*8. Faça uma função que verifique se um valor é perfeito ou não. Um valor é dito
perfeito quando ele é igual a soma dos seus divisores excetuando ele
próprio. (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores). A função deve
retornar um valor booleano.*/

#include <stdio.h>
#include <stdlib.h>

int perfeito (int num){
    int soma = 0;
    for (int i = 1; i<num; i++){
        if (num % i == 0){
            soma += i;
        }
    }   

    if (soma == num){
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    int num;

    printf("Insira um numero para saber se e perfeito: ");
    scanf("%d", &num);

    if (perfeito(num)){
        printf("Esse numero e perfeito!\n");
    } else {
        printf("Esse numero nao e perfeito!\n");
    }

    system("pause");
    return 0;
}