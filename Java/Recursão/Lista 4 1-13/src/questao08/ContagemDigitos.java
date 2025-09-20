package questao08;

public class ContagemDigitos {
    public int contarDigito(int n, int k) {
        if (n == 0) return 0;
        int count = (n % 10 == k) ? 1 : 0;
        return count + contarDigito(n / 10, k);
    }
}
