package questao02;

public class Principal {
    public static void main(String[] args) {
        Fibonacci f = new Fibonacci();
        int resultado = f.fibonacci(7);
        System.out.println("Fibonacci(7) = " + resultado);
    }
}
