#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void cadastrarAluno(char nomes[][50], int qtd){
    for(int i = 0; i < qtd; i++){
        printf("(Limite de 10 alunos // digite 0 para parar)\n");
        printf("Insira o nome do aluno: ");
        fgets(nomes[i], 50, stdin);

        if(nomes[i][0] == '0'){
            nomes[i][0] = '\0';
            break;
        }
    }
}

void tranformarParaMaiuscula(char string[]){
    int tamanho = strlen(string);
    for(int i = 0; i < tamanho; i++){
        if(string[i] >= 'a' && string[i] <= 'z'){
            string[i] -= 32;
        }
    }
}

void lancarNotas(float notas[][3], int qtd, char nomes[][50], float medias[]){
    int codigo = 0;
    while(1){
        printf("Codigo do Aluno: ");
        scanf("%d", &codigo);

        if(codigo == -1){
            break;
        }

        if(codigo >= 0 && codigo < qtd && strlen(nomes[codigo]) > 0){
            for(int i = 0; i < 3; i++){
                printf("Insira a nota %d: ", i+1);
                scanf("%f", &notas[codigo][i]);
            }

            float soma = 0;
            for(int i = 0; i < 3; i++){
                soma += notas[codigo][i];
            }
            medias[codigo] = soma / 3;
        } else {
            printf("Codigo invalido.\n");
        }
    }
    getchar();
}

void removerQuebraDeLinha(char string[]){
    int tamanho = strlen(string);
    if(tamanho > 0 && string[tamanho - 1] == '\n'){
        string[tamanho - 1] = '\0';
    }
}

void listarAlunos(char nomes[][50], float notas[][3], float medias[], int qtd){
    printf("ID\t%-30s N1\tN2\tN3\tMEDIA\n", "NOME");
    for(int i = 0; i < qtd; i++){
        if(strlen(nomes[i]) > 0){
            printf("%d\t%-30s %.1f\t%.1f\t%.1f\t%.1f\n", i, nomes[i],
                   notas[i][0], notas[i][1], notas[i][2], medias[i]);
        }
    }
}

int main(){
    int opcao;
    float notas[10][3] = {0};
    float medias[10] = {0};
    char alunos[10][50] = {{0}};

    while(1){
        printf("\n\n\t---Sistema de Cadastro e Notas---\n\n");
        printf("1 -> Cadastrar aluno\n");
        printf("2 -> Lancar notas\n");
        printf("3 -> Listar alunos e medias\n");
        printf("0 -> Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch(opcao){
            case 1:
                printf("\n\n\t---Cadastro de alunos---\n\n");
                cadastrarAluno(alunos, 10);
                for(int i = 0; i < 10; i++){
                    removerQuebraDeLinha(alunos[i]);
                    tranformarParaMaiuscula(alunos[i]);
                }
                break;
            case 2:
                printf("\n\n\t---Alunos Cadastrados---\n\n");
                printf("Digite -1 para parar\n");
                printf("CODIGO\tALUNO\n");
                for(int i = 0; i < 10; i++){
                    if(strlen(alunos[i]) > 0){
                        printf("%d\t%s\n", i, alunos[i]);
                    }
                }
                lancarNotas(notas, 10, alunos, medias);
                break;
            case 3:
                listarAlunos(alunos, notas, medias, 10);
                break;
            case 0:
                return 0;
            default:
                printf("ERRO: Opcao incorreta, tente novamente\n");
                break;
        }
    }

    system("pause");
    return 0;
}