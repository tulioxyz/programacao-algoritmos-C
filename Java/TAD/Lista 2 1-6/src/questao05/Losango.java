package questao05;

public class Losango {
    double diagonalMaior;
    double diagonalMenor;
    double area;

    public Losango(double diagonalMaior, double diagonalMenor){
        this.diagonalMaior = diagonalMaior;
        this.diagonalMenor = diagonalMenor;
    }

    double calcularAreaLosango(){
        this.area = (diagonalMaior*diagonalMenor)/2;
        return area;
    }
}
