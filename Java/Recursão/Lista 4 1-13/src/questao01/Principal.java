package questao01;

public class Principal {
    public static void main(String[] args) {
        Fatorial f = new Fatorial();
        int resultado = f.fatorial(5);
        System.out.println("Fatorial de 5 = " + resultado);
    }
}
