package questao16;
import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        System.out.println("Insira um numero para ver sua tabuada");
        int num = entrada.nextInt();

        for(int i=1;i<=10;i++){
            System.out.printf("%d x %d = %d\n", num, i, num*i);
        }
    }
}
