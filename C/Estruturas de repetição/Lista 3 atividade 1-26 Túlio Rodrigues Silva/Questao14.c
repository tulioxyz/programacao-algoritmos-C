/*14.Um varejista on-line vende cinco produtos diferentes cujos preços de
revenda aparecem na tabela a seguir:
Escreva um programa que leia uma série
de pares de números da seguinte forma:
a) Número do produto.
b) Quantidade vendida durante um dia.
Seu programa deverá usar uma estrutura switch para ajudar a determinar
o preço de revenda para cada produto. O programa deverá calcular e
exibir o valor de revenda total de todos os produtos vendidos.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int produto, vendidos;
    float soma1, soma2, soma3, soma4, soma5, Valortotal;

    while(1)
    {
        printf("\tNumero do produto\tPreco de revenda\n");
        printf("\t1\t\t\tR$2.98\n");
        printf("\t2\t\t\tR$4.50\n");
        printf("\t3\t\t\tR$9.98\n");
        printf("\t4\t\t\tR$4.49\n");
        printf("\t5\t\t\tR$6.87\n");
        printf("Informe o produto e a quantidade vendida (Ex: 2 10, 5 21): ");
         scanf("%d %d", &produto, &vendidos);
        
        switch (produto)
        {
        case 1:
            soma1 = (vendidos*2.98);
            printf("O valor de revenda total foi: R$%.2f\n\n", soma1);
            break;
        case 2: 
            soma2 = (vendidos*4.50);
            printf("O valor de revenda total foi: R$%.2f\n\n", soma2);
            break;
        case 3:
            soma3 = (vendidos*9.98);
            printf("O valor de revenda total foi: R$%.2f\n\n", soma3);
            break;
        case 4:
            soma4 = (vendidos*4.49);
            printf("O valor de revenda total foi: R$%.2f\n\n", soma4);
            break;
        case 5: 
            soma5 = (vendidos*6.87);
            printf("O valor de revenda total foi: R$%.2f\n\n", soma5);
            break;
        default:
            printf("ERRO: Produto invalido!\n\n");
            break;
        }
        
        Valortotal = soma1 + soma2 + soma3 + soma4 + soma5;
        printf("O valor total final e R$%.2f\n\n", Valortotal);
    }
    system("pause");
    return 0;    
}