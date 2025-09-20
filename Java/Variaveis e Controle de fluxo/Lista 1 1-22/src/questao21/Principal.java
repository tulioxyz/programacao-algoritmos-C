package questao21;
import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        System.out.println("Digite sua idade");
        int idade = entrada.nextInt();
        System.out.println("Tempo de serviço");
        int tempo = entrada.nextInt();

        if(idade >= 65 || tempo >= 30 || idade >= 60 && tempo >=25){
            System.out.println("Pode se aposentar!");
        } else {
            System.out.println("Não pode se aposentar!");
        }
    }
}
