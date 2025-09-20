package questao17;
import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        System.out.print("Digite um número para calcular o fatorial: ");
        int numero = entrada.nextInt();

        int fatorial = 1;

        for (int i = numero; i >= 1; i--) {
            fatorial *= i;
        }

        System.out.printf("%d! = %d\n", numero, fatorial);
    }
}
