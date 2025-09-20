/*21.Escreva um programa que leia uma senha e só permita o acesso caso ela
seja igual a "1234". Enquanto a senha estiver incorreta, o programa deve
solicitar novamente.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int senha;

    while(senha != 1234)
    {
        printf("Digite sua senha: ");
        scanf("%d", &senha);

        if  (senha == 1234) {
            printf("\nAcesso permitido!\n\n");
        } else {
            printf("\nERRO: Senha incorreta, tente novamente!\n\n");
        }
    }

    system("pause");
    return 0;    
}