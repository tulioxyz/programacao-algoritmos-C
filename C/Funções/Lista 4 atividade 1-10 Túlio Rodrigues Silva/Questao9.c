/*9. Crie a função int entre(int x, int lim_inf, int lim_sup) que verifica se x está dentro
do intervalo [lim_inf, lim_sup].*/

#include <stdio.h>
#include <stdlib.h>

int entre (int x){
    int limInf = 10, limSup = 45;
    if (x >= limInf && x <= limSup){
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    if (entre(x)){
        printf("Seu numero faz parte do intervalo!\n");
    } else {
        printf("Seu numero nao faz parte do intervalo!\n");
    }

    system("pause");
    return 0;
}