package questao02;
import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        float peso, altura, imc;
        System.out.println("Digite sua altura:");
        altura = entrada.nextFloat();
        System.out.println("Digite seu peso:");
        peso = entrada.nextFloat();
        imc = peso/(altura*altura);

        System.out.printf("IMC: %.2f\nClassificação: ", imc);
        if(imc < 18.5){
            System.out.println("Magreza");
        } else if(imc >= 18.5 && imc < 24.9){
            System.out.println("Saúdavel");
        } else if(imc >= 25 && imc < 29.9){
            System.out.println("Sobrepeso");
        } else if(imc >= 30 && imc < 34.9){
            System.out.println("Obesidade grau I");
        } else if(imc >= 35 && imc < 39.9){
            System.out.println("Obesidade grau II (Severa)");
        } else if(imc >= 40){
            System.out.println("Obesidade grau III (Mórbita");
        }
    }
}
