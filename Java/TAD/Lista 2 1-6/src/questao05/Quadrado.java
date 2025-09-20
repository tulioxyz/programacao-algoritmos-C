package questao05;

public class Quadrado {
    double lado;
    double area;

    public Quadrado(double lado){
        this.lado = lado;
    }

    double calcularAreaQuadrado(){
        this.area = lado*lado;
        return area;
    }
}
