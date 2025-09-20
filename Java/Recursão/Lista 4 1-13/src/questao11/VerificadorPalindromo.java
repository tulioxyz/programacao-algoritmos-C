package questao11;

public class VerificadorPalindromo {
    public boolean isPalindromo(String s) {
        if (s.length() <= 1) return true;
        if (s.charAt(0) != s.charAt(s.length() - 1)) return false;
        return isPalindromo(s.substring(1, s.length() - 1));
    }
}
