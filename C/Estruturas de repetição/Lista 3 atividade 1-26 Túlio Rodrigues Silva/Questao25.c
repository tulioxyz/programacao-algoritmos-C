/*25.Escreva um programa em C que simule um caixa eletrônico com as
seguintes funcionalidades:
IFBank:
1 - Ver saldo
2 - Realizar depósito
3 - Realizar saque
0 - Sair

Regras de negócio:
O saldo inicial é deve ser R$ 0,00.
O valor do saque deve ser de no máximo R$ 500,00. Se for maior, exiba
uma mensagem de erro.
O saque só deve ocorrer se houver saldo suficiente.
O programa deve exibir o menu novamente após cada operação, até que
o usuário escolha sair (0).
Se o usuário digitar uma opção inválida, exiba uma mensagem de erro e
mostre o menu novamente.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    float saldo = 0, saque, deposito;

    while(1)
    {
        printf("---IFBANK---\n\n");
        printf("1 - Ver saldo\n");
        printf("2 - Realizar deposito\n");
        printf("3 - Realizar saque\n\n");
        printf("0 - Sair\n\n");
        printf("Opcao: ");
         scanf("%d", &opcao);

        if (opcao == 0) {
            break;
        }

        switch (opcao)
        {
        case 1:
            printf("\tConsultar Saldo\n");
            printf("Seu saldo: $%.2f\n\n", saldo);
            break;
        case 2: 
            printf("\tEfetuar deposito\n");
            printf("Valor do deposito: ");
             scanf("%f", &deposito);
            saldo = saldo + deposito;
            printf("Deposito efetuado com sucesso!\n");
            printf("Saldo atual: $%.2f\n\n", saldo);
            
            break;
        case 3: 
            printf("\tEfetuar saque\n");
            printf("O valor maximo para saques e $500.00\n\n");
            printf("Seu saldo: $%.2f\n", saldo);
            printf("Valor do saque: ");
             scanf("%f", &saque);

            if (saque > saldo)  {
                printf("ERRO: Saldo insuficiente\n\n");
            } else if (saque > 500.00) {
                printf("ERRO: Valor maximo para saques e $500.00\n\n");
            } else {
                saldo = saldo - saque;
                printf("Saque efetuado com suceesso!\n");
                printf("Saldo atual: $%.2f\n\n", saldo);
            }
            break;       
        default:
            printf("ERRO: Opcao invalida!\n\n");
            break;
        }
    }

    system("pause");
    return 0;    
}