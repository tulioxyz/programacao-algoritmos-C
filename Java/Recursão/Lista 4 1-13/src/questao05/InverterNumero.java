package questao05;

public class InverterNumero {
    public int inverter(int n) {
        if (n < 10) return n;
        int resto = n % 10;
        int num = n / 10;
        int multiplicador = 1;
        int aux = num;
        while (aux > 0) {
            multiplicador *= 10;
            aux /= 10;
        }
        return resto * multiplicador + inverter(num);
    }
}
