package questao07;

public class Principal {
    public static void main(String[] args) {
        InverterVetor iv = new InverterVetor();
        int[] vetor = {1, 2, 3, 4, 5};
        iv.inverter(vetor, 0, vetor.length - 1);
        System.out.print("Vetor invertido: ");
        for (int num : vetor) System.out.print(num + " ");
    }
}
