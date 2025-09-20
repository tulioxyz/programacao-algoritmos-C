package questao05;

public class Circulo {
    double raio;
    double area;

    public Circulo(double raio) {
        this.raio = raio;
    }

    double calcularAreaCirculo(){
        this.area = 3.14 * (raio*raio);
        return area;
    }

}
