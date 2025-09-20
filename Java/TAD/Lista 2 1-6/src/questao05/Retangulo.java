package questao05;

public class Retangulo {
    double base;
    double altura;
    double area;

    public Retangulo(double base, double altura){
        this.base = base;
        this.altura = altura;
    }

    double calcularAreaRetangulo(){
        this.area = base*altura;
        return area;
    }
}
