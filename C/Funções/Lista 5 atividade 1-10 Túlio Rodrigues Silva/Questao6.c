/*6. Um inteiro é considerado primo se for divisível apenas por 1 e por ele
mesmo. Por exemplo, 2, 3, 5 e 7 são primos, mas 4, 6, 8 e 9 não são. Escreva
uma função que determine se um número é primo.*/

#include <stdio.h>
#include <stdlib.h>

int primo(int x){
    for (int i = 2; i < x; i++){
        if (x % i == 0){
            return 0;
        }
    }
    if (x > 1){
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    int num;

    printf("Insira um numero para saber se e primo: ");
    scanf("%d", &num);

    if (primo(num)){
        printf("Seu numero e primo!\n");
    } else {
        printf("Seu numero nao e primo!\n");
    }

    system("pause");
    return 0;
}