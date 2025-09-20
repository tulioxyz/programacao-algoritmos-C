package questao04;
import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        System.out.println("Digite o nome de usuario:");
        String nomeUsuario = entrada.nextLine();
        System.out.println("Digite o senha:");
        String senha = entrada.nextLine();

        Usuario user1 = new Usuario(nomeUsuario, senha);
        boolean resultado  = user1.isCorrect();
        System.out.println(resultado);
    }
}
