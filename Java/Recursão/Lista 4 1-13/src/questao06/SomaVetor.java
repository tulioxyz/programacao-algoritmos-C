package questao06;

public class SomaVetor {
    public int somar(int[] vetor, int i) {
        if (i == vetor.length) return 0;
        return vetor[i] + somar(vetor, i + 1);
    }
}
