package questao04;
import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int senha = 1234;
        System.out.println("Digite a senha");
        int digitada = entrada.nextInt();

        if(digitada == senha){
            System.out.println("ACESSO PERMITIDO");
        } else {
            System.out.println("ACESSO NEGADO");
        }
    }
}
