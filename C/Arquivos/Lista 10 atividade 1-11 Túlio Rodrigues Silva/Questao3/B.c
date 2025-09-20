#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* arquivo = fopen("alunos.txt", "r");
    if(arquivo == NULL){
        printf("Falha no sistema\n");
        return 1;
    }

    char nome[30];
    float nota;

    while (fscanf(arquivo, "%s %f", nome, &nota) != EOF) {
        if(nota >= 6){
            printf("%s - %.1f - Aprovado\n", nome, nota);
        } else {
            printf("%s - %.1f - Reprovado\n", nome, nota);
        }
    }
    fclose(arquivo);

    system("pause");
    return 0;
}