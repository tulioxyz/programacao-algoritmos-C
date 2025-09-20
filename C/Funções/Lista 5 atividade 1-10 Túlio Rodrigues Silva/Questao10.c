/*10. Faça uma função que receba um valor inteiro e positivo e calcula o seu
fatorial.*/

#include <stdio.h>
#include <stdlib.h>

int calcularFatorial (int x){
    int fatorial = 1;
    for(int cont = 1; cont<=x; cont++){
        fatorial *= cont;   
    }
    return fatorial;

}

int main()
{
    int num;

    printf("Insira um numero para ver o seu fatorial: ");
    scanf("%d", &num);

    printf("%d\n", calcularFatorial(num));

    system("pause");
    return 0;
}