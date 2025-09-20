package questao03;

public class Autor {
    String nome;
    String dataNascimento;

    public Autor(String nome, String dataNascimento){
        this.nome = nome;
        this.dataNascimento = dataNascimento;
    }

    void dadosAutor(){
        System.out.println("Autor: " + this.nome);
        System.out.println("Data de nascimento: " + this.dataNascimento);
        System.out.println("---------------------");
    }
}
