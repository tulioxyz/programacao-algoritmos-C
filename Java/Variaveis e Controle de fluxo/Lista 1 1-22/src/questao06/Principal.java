package questao06;
import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int[] num = new int[3];
        for(int i=0;i<3;i++){
            System.out.println("Insira numero da posição "+i+":");
            num[i] = entrada.nextInt();
        }
        int maior = num[0];
        for(int i=0;i<3;i++){
            if(num[i]>maior){
                maior = num[i];
            }
        }
        System.out.println("O maior numero é: "+maior);
    }
}

