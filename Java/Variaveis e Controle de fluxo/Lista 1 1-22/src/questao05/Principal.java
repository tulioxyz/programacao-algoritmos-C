package questao05;
import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        System.out.println("Digite a quantidade de maçãs compradas: ");
        int quantidade = entrada.nextInt();
        double valor, precoFinal;

        if(quantidade < 12){
            valor = 0.50;
        } else {
            valor = 0.30;
        }
        precoFinal = quantidade*valor;
        System.out.printf("%d maçãs ficam por R$%.2f reais\n", quantidade, precoFinal);
    }
}
