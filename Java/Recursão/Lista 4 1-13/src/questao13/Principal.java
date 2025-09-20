package questao13;

public class Principal {
    public static void main(String[] args) {
        SomaDigitos sd = new SomaDigitos();
        int resultado = sd.somaDigitos(123);
        System.out.println("Soma dos dígitos: " + resultado);
    }
}
