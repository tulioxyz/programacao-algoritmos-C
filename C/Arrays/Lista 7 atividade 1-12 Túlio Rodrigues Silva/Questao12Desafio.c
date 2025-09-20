#include <stdio.h>
#include <stdlib.h>

void preencherTabuleiro(char tabuleiro[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            tabuleiro[i][j] = ' ';
        }
    }
}

void  imprimirTabuleiro(char tabuleiro[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf(" %c ", tabuleiro[i][j]);
            if(j  < 2){
                printf("|");                
            }
                   
        }
        printf("\n"); 
        if(i < 2){
            printf("-----------\n");
        }      
    }
}

void efetuarJogada(char tabuleiro[3][3], char jogador){
    int linha, coluna;
    while(1){
        printf("Jogador %c, digite a linha e a coluna (0 a 2) Ex(1 2): ", jogador);
        scanf("%d %d", &linha, &coluna);

        if(linha < 0 || linha > 2 || coluna < 0 || coluna > 2){
            printf("ERRO: Posicao invalida, tente novamente!\n");
            continue;
        }
        if (tabuleiro[linha][coluna] != ' '){
            printf("ERRO: Essa posicao esta ocupada, tente novamente!\n");
            continue;
        }

        tabuleiro[linha][coluna] = jogador;
        break;       
    }
}

char verificarVencedor(char tabuleiro[3][3]){
    for(int i=0; i<3; i++){
        if(tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != ' '){
        return tabuleiro[i][0];
        }
    }
    for(int j=0; j<3; j++){
        if(tabuleiro[0][j] == tabuleiro[1][j] && tabuleiro[1][j] == tabuleiro[2][j] && tabuleiro[0][j] != ' '){
        return tabuleiro[0][j];
        }
    }
    if(tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != ' '){
        return tabuleiro[0][0];
    }
    if(tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != ' '){
        return tabuleiro[0][2];
    }

    return ' ';
}

int verificarEmpate(char tabuleiro[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(tabuleiro[i][j] == ' '){
                return 0;
            }
        }
    }
    return 1;
}


int main()
{
    char tabuleiro[3][3];
    int jogarNovamente = 1;

    while(jogarNovamente){
        preencherTabuleiro(tabuleiro);
        char jogadorAtual = 'X';

        while(1){
            imprimirTabuleiro(tabuleiro);
            efetuarJogada(tabuleiro, jogadorAtual);

            if(verificarVencedor(tabuleiro) == jogadorAtual){
                printf("Jogador %c venceu!\n", jogadorAtual);
                break;
            }
            if(verificarEmpate(tabuleiro)){
                imprimirTabuleiro(tabuleiro);
                break;
            }

            jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
        }

        printf("Deseja jogar novamente? (1 - Sim |  0 - Nao): ");
        scanf("%d", &jogarNovamente);
    }

    printf("Fim de jogo\n");

    system("pause");
    return 0;
}