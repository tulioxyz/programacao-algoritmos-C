package questao03;
import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        System.out.println("Insira um numero: ");
        int num = entrada.nextInt();

        if(num % 2 == 0){
            System.out.println("O numero é par");
        } else {
            System.out.println("O numero é impar");
        }
    }
}
