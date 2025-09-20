package questao03;

public class Editora {
    String nome;
    String cnpj;
    String endereco;

    public Editora(String nome, String cnpj, String endereco){
        this.nome = nome;
        this.cnpj = cnpj;
        this.endereco = endereco;
    }

    void dadosEditora(){
        System.out.println("Editora: " + this.nome);
        System.out.println("CNPJ: " + this.cnpj);
        System.out.println("Endereço: " + this.endereco);
    }
}
