package questao04;

public class Usuario {
    String nomeUsuario = "Joaozinho";
    String senha = "1234";

    String nomeRecebido;
    String senhaRecebida;

    public Usuario(String nomeUsuario, String senha) {
        this.nomeRecebido = nomeUsuario;
        this.senhaRecebida = senha;
    }

    boolean isCorrect(){
        if(nomeUsuario.equals(nomeRecebido)  && senha.equals(senhaRecebida)){
            return true;
        } else {
            return false;
        }
    }
}
