#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nomes[3][30];
    float notas[3];
    FILE* arquivo = fopen("alunos.txt", "w");
    if(arquivo ==  NULL){
        printf("Falha ao abrir arquivo\n");
        return 1;
    }

    for(int i=0; i<3; i++){
        printf("Insira o nome e a nota do aluno %d (ex: Joao 6.5, Maria 8): ", i);
        scanf("%s %f", nomes[i], &notas[i]);
        fprintf(arquivo, "%s\t%.1f\n", nomes[i], notas[i]);
    }
    fclose(arquivo);

    system("pause");
    return 0;
}