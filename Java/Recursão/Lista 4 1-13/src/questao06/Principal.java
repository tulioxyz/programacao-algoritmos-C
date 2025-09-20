package questao06;

public class Principal {
    public static void main(String[] args) {
        SomaVetor sv = new SomaVetor();
        int[] vetor = {1, 2, 3, 4, 5};
        int resultado = sv.somar(vetor, 0);
        System.out.println("Soma do vetor = " + resultado);
    }
}
