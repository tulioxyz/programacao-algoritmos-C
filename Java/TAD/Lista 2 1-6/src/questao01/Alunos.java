package questao01;

public class Alunos {
    String nome;
    String matricula;
    double nota1, nota2, nota3, trabalho;

    public Alunos(String nome, String matricula, double nota1, double nota2, double nota3, double trabalho){
        this.nome = nome;
        this.matricula = matricula;
        this.nota1 = nota1 * 2;
        this.nota2 = nota2 * 2;
        this.nota3 = nota3 * 2;
        this.trabalho = trabalho * 1.5;
    }

    double calcularMediaPonderada(){
        double media = (nota1+nota2+nota3+trabalho) / 7.5;
        return media;
    }
}
