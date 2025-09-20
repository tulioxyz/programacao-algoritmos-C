package questao05;
import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        double area;

        System.out.println("\tCalcular area das formas");
        System.out.println("1 - Circulo");
        System.out.println("2 - Quadrado");
        System.out.println("3 - Triangulo");
        System.out.println("4 - Retangulo");
        System.out.println("5 - Losango");
        int opcao = entrada.nextInt();

        switch (opcao){
            case 1:
                System.out.println("Informe o raio do circulo:");
                Circulo circulo = new Circulo(entrada.nextDouble());
                area = circulo.calcularAreaCirculo();
                System.out.println("Area: "+area);
                break;
            case 2:
                System.out.println("Informe o lado do quadrado:");
                Quadrado quadrado = new Quadrado(entrada.nextDouble());
                area = quadrado.calcularAreaQuadrado();
                System.out.println("Area: "+area);
                break;
            case 3:
                System.out.println("Informe a base do triangulo:");
                double base = entrada.nextDouble();
                System.out.println("Informe a altura do triangulo:");
                Triangulo triangulo = new Triangulo(base, entrada.nextDouble());
                area = triangulo.calcularAreaTriangulo();
                System.out.println("Area: "+area);
                break;
            case 4:
                System.out.println("Informe a base do retangulo:");
                base = entrada.nextDouble();
                System.out.println("Informe a altura do retangulo:");
                Retangulo retangulo = new Retangulo(base, entrada.nextDouble());
                area = retangulo.calcularAreaRetangulo();
                System.out.println("Area: "+area);
                break;
            case 5:
                System.out.println("Informe a diagonal maior do losango:");
                double maior = entrada.nextDouble();
                System.out.println("Informe a diagonal menor do losango:");
                Losango losango = new Losango(maior, entrada.nextDouble());
                area = losango.calcularAreaLosango();
                System.out.println("Area: "+area);
                break;
            default:
                System.out.println("ERRO: Opção invalida!");
                break;
        }
    }
}
