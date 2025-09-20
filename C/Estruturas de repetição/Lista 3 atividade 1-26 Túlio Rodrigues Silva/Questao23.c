/*23.Escreva um programa que simule um jogo de adivinhação. O programa  escolhe um número aleatório entre 1 e 100, e o usuário 
deve tentar  acertar. O jogo continua até acertar, e o programa informa se o palpite foi  maior ou menor que o número secreto.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroEscolhido = 42, palpite, tentativas = 0;
    
    printf("\n\tJogo de advinhacao: advinhe o numero de 1 a 100!\n\n");

    while(palpite != numeroEscolhido)
    {
        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);        

        if (palpite < 0 || palpite > 100)
        {
            printf("ERRO: Apenas numeros de 0 a 100!\n");
        } else if (palpite > numeroEscolhido) {
            printf("Numero muito alto! Menos!!\n");
            tentativas++;
        } else if (palpite < numeroEscolhido) {
            printf("Numero muito baixo! Mais!!\n");
            tentativas++;
        } else if (palpite == numeroEscolhido) {
            printf("Parabens! Voce acertou o numero\n");
            printf("Tentativas: %d\n", tentativas);
        }    
    }

    system("pause");
    return 0;    
}