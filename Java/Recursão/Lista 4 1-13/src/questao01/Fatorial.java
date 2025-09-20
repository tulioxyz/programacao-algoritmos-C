package questao01;

public class Fatorial {
    public int fatorial(int valor) {
        if (valor == 0) return 1;
        return valor * fatorial(valor - 1);
    }
}
