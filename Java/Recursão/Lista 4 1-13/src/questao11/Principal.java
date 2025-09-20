package questao11;

public class Principal {
    public static void main(String[] args) {
        VerificadorPalindromo p = new VerificadorPalindromo();
        boolean resultado = p.isPalindromo("arara");
        System.out.println("É palíndromo? " + resultado);
    }
}
