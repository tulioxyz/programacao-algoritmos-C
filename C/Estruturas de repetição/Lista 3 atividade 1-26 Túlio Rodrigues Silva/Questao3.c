/*3. Crie um programa que imprima o seguinte menu na tela. Em seguida o
programa deve solicitar ao usuário que informe uma opção. Caso a opção
digitada não seja válida (diferente de 0, 1 ou 2), o programa deve exibir a
mensagem “Opção inválida” e solicitar a opção novamente. Caso uma das
opções seja selecionada o programa deve ser encerrado.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;

    while(opcao != 0 || opcao != 1 || opcao != 2)
    {
        printf("\t-------Gestao de Produtos-------\n\n");
        printf("1\t-> Cadastrar novo produto\n");
        printf("2\t-> Listar novo produto\n\n");
        printf("0\t-> Sair\n\n");
        printf("Opcao: ");
         scanf("%d", &opcao);

         if (opcao == 1 || opcao == 2 || opcao == 0)
         {
            break;
         }
         else
         {
            printf("\n\nERRO: OPCAO INVALIDA, TENTE NOVAMENTE\n\n");
         }
    }

    system("pause");
    return 0;    
}
