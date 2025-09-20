package questao09;

public class Principal {
    public static void main(String[] args) {
        MDC m = new MDC();
        int resultado = m.mdc(48, 18);
        System.out.println("MDC(48,18) = " + resultado);
    }
}
