package questao04;

public class Potencia {
    public int potencia(int k, int n) {
        if (n == 0) return 1;
        return k * potencia(k, n - 1);
    }
}
