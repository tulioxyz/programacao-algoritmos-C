package questao18;
import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        System.out.print("Digite o primeiro número: ");
        int inicio = entrada.nextInt();

        System.out.print("Digite o segundo número: ");
        int fim = entrada.nextInt();

        if (inicio > fim) {
            int temp = inicio;
            inicio = fim;
            fim = temp;
        }

        for (int i = inicio; i <= fim; i++) {
            if (i > 1) {
                int contador = 0;

                for (int j = 1; j <= i; j++) {
                    if (i % j == 0) {
                        contador++;
                    }
                }

                if (contador == 2) {
                    System.out.println(i);
                }
            }
        }
    }
}
