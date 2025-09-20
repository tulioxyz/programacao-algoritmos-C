package questao06;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;

public class Relogio {
    public static void exibirHoraAtual() {
        LocalTime agora = LocalTime.now();
        DateTimeFormatter formato = DateTimeFormatter.ofPattern("HH:mm");
        System.out.println("Hora atual: " + agora.format(formato));
    }

    public static String converterMinutosEmHoras(int minutos) {
        int horas = minutos / 60;
        int restoMinutos = minutos % 60;
        return horas + "h " + restoMinutos + "min";
    }

    public static String somarHoras(int h1, int m1, int h2, int m2) {
        int totalMin = m1 + m2;
        int totalHoras = h1 + h2 + (totalMin / 60);
        int minutosRestantes = totalMin % 60;
        return totalHoras + "h " + minutosRestantes + "min";
    }

    public static boolean ehHorarioValido(int h, int m) {
        return (h >= 0 && h <= 23) && (m >= 0 && m <= 59);
    }
}