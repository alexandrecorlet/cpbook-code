import java.util.Scanner;
import java.math.BigInteger;

public class IsPrime {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        BigInteger X = scanner.nextBigInteger(); 
        String ans = X.isProbablePrime(1) ? "Prime" : "Composite"; 
        System.out.println(ans);
    }
}
