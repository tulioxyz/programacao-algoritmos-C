package questao07;

public class InverterVetor {
    public void inverter(int[] vetor, int inicio, int fim) {
        if (inicio >= fim) return;
        int temp = vetor[inicio];
        vetor[inicio] = vetor[fim];
        vetor[fim] = temp;
        inverter(vetor, inicio + 1, fim - 1);
    }
}
