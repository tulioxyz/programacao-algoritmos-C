package questao06;
import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        String resultado;

        System.out.println("\tRelógio Digital");
        System.out.println("1 - Hora atual");
        System.out.println("2 - Converter minutos em hora");
        System.out.println("3 - Somar horas");
        System.out.println("4 - Validar horario");
        int opcao = entrada.nextInt();

        switch (opcao){
            case 1:
                Relogio.exibirHoraAtual();
                break;
            case 2:
                System.out.println("Informe os minutos");
                resultado = Relogio.converterMinutosEmHoras(entrada.nextInt());
                System.out.println(resultado);
                break;
            case 3:
                System.out.println("Informe as horas 1");
                int h1 = entrada.nextInt();
                System.out.println("Informe os minutos 1");
                int m1 = entrada.nextInt();
                System.out.println("Informe as horas 2");
                int h2 = entrada.nextInt();
                System.out.println("Informe os minutos 2");
                int m2 = entrada.nextInt();
                resultado = Relogio.somarHoras(h1, m1, h2, m2);
                System.out.println(resultado);
                break;
            case 4:
                System.out.println("Informe as horas");
                int h = entrada.nextInt();
                System.out.println("Informe os minutos");
                int m = entrada.nextInt();
                boolean resultado2 = Relogio.ehHorarioValido(h, m);
                if(resultado2){
                    System.out.println("Horario valido!");
                } else {
                    System.out.println("Horario invalido!");
                }
                break;
            default:
                System.out.println("ERRO: Opcao invalida!");
        }
    }
}
