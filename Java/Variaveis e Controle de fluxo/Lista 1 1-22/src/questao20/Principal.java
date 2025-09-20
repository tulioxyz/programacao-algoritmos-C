package questao20;
import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        System.out.println("Digite um numero");
        int num = entrada.nextInt();

        if(num % 3 == 0 ^ num % 5 == 0) {
            System.out.println("Numero dividido apenas por um");
        } else {
            System.out.println("Erro, numero dividido pelos dois");
        }
    }
}
