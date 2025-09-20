package questao01;

public class Principal {
    public static void main(String[] args){
        Alunos aluno1 = new Alunos("Tulio", "145678", 4, 6.5, 7, 8.4);
        double media = aluno1.calcularMediaPonderada();
        System.out.printf("Media: %.2f\n", media);
    }
}
