package questao03;

public class Principal {
    public static void main(String[] args) {
        Livro livro1 = new Livro("Noite", 154, 2022);
        Autor autorL1 = new Autor("Tulio R. Silva", "30/01/1987");
        Editora editoraL1 = new Editora("Alta Books", "49581433000177", "Rua dom, 105, Centro,  Almenara-MG");

        livro1.dadosLivro();
        autorL1.dadosAutor();
        editoraL1.dadosEditora();
    }
}
