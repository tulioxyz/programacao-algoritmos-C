package questao05;

public class Principal {
    public static void main(String[] args) {
        InverterNumero inv = new InverterNumero();
        int resultado = inv.inverter(123);
        System.out.println("Número invertido: " + resultado);
    }
}
