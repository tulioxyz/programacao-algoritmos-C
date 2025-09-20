package questao05;

public class Triangulo {
    double base;
    double altura;
    double area;

    public Triangulo(double base, double altura){
        this.base = base;
        this.altura = altura;
    }

    double calcularAreaTriangulo(){
        this.area = (base*altura)/2;
        return area;
    }
}
