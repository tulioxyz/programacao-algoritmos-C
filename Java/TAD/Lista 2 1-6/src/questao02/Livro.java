package questao02;

public class Livro {
    String titulo;
    String nomeEditora;
    String nomeAutor;
    int quantidadePaginas, anoPublicacao;

    public Livro(String titulo, String nomeEditora, String nomeAutor, int quantidadePaginas, int anoPublicacao){
        this.titulo = titulo;
        this.nomeEditora = nomeEditora;
        this.nomeAutor = nomeAutor;
        this.quantidadePaginas = quantidadePaginas;
        this.anoPublicacao = anoPublicacao;
    }

    void imprimirDetalhes(){
        System.out.println("Livro");
        System.out.println("Titulo: " + this.titulo);
        System.out.println("Total de paginas: " + this.quantidadePaginas);
        System.out.println("Publicação: " + this.anoPublicacao);
        System.out.println("Autor: " + this.nomeAutor);
        System.out.println("Editora: " + this.nomeEditora+"\n");
    }
}
