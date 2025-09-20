package questao03;

public class Livro {
    String titulo;
    int quantidadePaginas, anoPublicacao;

    public Livro (String titulo, int quantidadePaginas, int anoPublicacao){
        this.titulo = titulo;
        this.quantidadePaginas = quantidadePaginas;
        this.anoPublicacao = anoPublicacao;
    }

    void dadosLivro(){
        System.out.println("Livro: " + this.titulo);
        System.out.println("Quantidade de paginas: " + this.quantidadePaginas);
        System.out.println("Publicação: " + this.anoPublicacao);
        System.out.println("---------------------");
    }
}
