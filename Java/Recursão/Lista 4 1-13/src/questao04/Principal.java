package questao04;

public class Principal {
    public static void main(String[] args) {
        Potencia p = new Potencia();
        int resultado = p.potencia(2, 5);
        System.out.println("2^5 = " + resultado);
    }
}
