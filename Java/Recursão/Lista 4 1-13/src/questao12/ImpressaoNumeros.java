package questao12;

public class ImpressaoNumeros {
    public void crescente(int n) {
        if (n < 0) return;
        crescente(n - 1);
        System.out.print(n + " ");
    }

    public void decrescente(int n) {
        if (n < 0) return;
        System.out.print(n + " ");
        decrescente(n - 1);
    }
}
