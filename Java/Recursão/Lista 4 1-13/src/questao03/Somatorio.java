package questao03;

public class Somatorio {
    public int somatorio(int n) {
        if (n == 1) return 1;
        return n + somatorio(n - 1);
    }
}
