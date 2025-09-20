package questao02;

public class Principal {
    public static void main(String[] args) {
        Livro livro1 = new Livro("Quem sou eu", "Alta Books", "Tulio R. Silva", 245, 2025);
        Livro livro2 = new Livro("Um dia", "Alta Books", "Tulio R. Silva", 199, 2024);
        livro1.imprimirDetalhes();
        livro2.imprimirDetalhes();

    }
}
