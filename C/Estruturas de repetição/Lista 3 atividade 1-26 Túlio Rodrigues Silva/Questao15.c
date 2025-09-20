/*15.Escreva o programa que solicite do usuário o número de alunos de uma  turma e, para cada aluno, solicite as suas três notas,
ao fim o programa  deve imprimir a média de cada aluno e média da turma. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroAlunosTurma, aluno = 1;
    float nota1, nota2, nota3, mediaAluno, mediaTurma = 0, acumulador = 0;

    printf("Insira o numero de alunos na turma: ");
    scanf("%d", &numeroAlunosTurma);

    while (aluno <= numeroAlunosTurma)
    {
        printf("Aluno (%d)\n", aluno);
        printf("Digite a primeira nota: ");
         scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
         scanf("%f", &nota2);
        printf("Digite a terceira nota: ");
         scanf("%f", &nota3);

        mediaAluno = (nota1+nota2+nota3) / 3;
        acumulador = acumulador + mediaAluno;

        printf("Media do Aluno %d: %.1f\n", aluno, mediaAluno);
        aluno++;
 
    }

    mediaTurma = acumulador / numeroAlunosTurma;

    printf("A media da turma e %.2f\n\n", mediaTurma);

    system("pause");
    return 0;    
}