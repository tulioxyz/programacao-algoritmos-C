package questao07;
import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int[] medida = new int[3];
        for(int i=0;i<3;i++){
            System.out.println("Digite o comprimento de um dos lados: ");
            medida[i]=entrada.nextInt();
        }
        if(medida[0] == medida[1] && medida[1] == medida[2]){
            System.out.println("Triangulo equílatero");
        } else if (medida[0] != medida[1] && medida[0] != medida[2] && medida[1] != medida[2]){
            System.out.println("Triangulo isósceles");
        } else {
            System.out.println("Triangulo escalano");
        }
    }
}
