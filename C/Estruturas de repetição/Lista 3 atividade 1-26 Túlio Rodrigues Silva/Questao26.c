/*26.Escreva um programa que apresente um menu com opções Clientes,
Fornecedores, Encomendas e Sair. O programa deve apresentar a opção
escolhida pelo usuário ou informar que a opção é inválida. Em seguida
deve apresentar o menu novamente, isso deve se repetir até que o
usuário escolha a opção sair.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char opcao;

    while (1)
    {
        printf("\t---Selecione uma das opcoes---\n\n");
        printf("\"C,c\" -> Clientes\n");
        printf("\"F,f\" -> Fornecedores\n");
        printf("\"E,e\" -> Encomendas\n");
        printf("\"S,s\" -> Sair\n");
        printf("Opcao: ");
         scanf(" %c", &opcao);

        if (opcao == 'S' || opcao == 's') {
            printf("Opcao SAIR selecionada\n\n");
            break;
        }

        switch (opcao)
        {
        case 'C':
        case 'c':
            printf("Opcao CLIENTES selecionada\n\n");
            break;
        case 'F':
        case 'f':
            printf("Opcao FORNECEDORES selecionada\n\n");
            break;
        case 'E':
        case 'e':
            printf("Opcao ENCOMENDAS selecionada\n\n");
            break;
        default:
            printf("ERRO: Opcao invalida\n\n");
            break;
        }
    }
    
    system("pause");
    return 0;    
}