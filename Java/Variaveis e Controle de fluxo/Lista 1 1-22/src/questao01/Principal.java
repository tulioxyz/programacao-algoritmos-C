package questao01;
import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int num1, num2;
        System.out.println("Digite o primeiro numero: ");
        num1 = entrada.nextInt();
        System.out.println("Digite o segundo numero: ");
        num2 = entrada.nextInt();

        if(num1 > num2){
            System.out.println("o primeiro numero: "+num1+" é maior que o segundo: "+num2);
        } else if(num2 > num1){
            System.out.println("o segundo numero: "+num2+" é maior que o primeiro: "+num1);
        } else {
            System.out.println("Ambos os numeros sao iguais");
        }
    }
}