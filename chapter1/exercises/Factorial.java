import java.math.BigInteger;

public class Factorial {                                     
    public static void main(String[] args) {
        BigInteger fac = BigInteger.ONE;
        for (int i = 2; i <= 40; ++i)
            fac = fac.multiply(BigInteger.valueOf(i));          // it is in the library!
        System.out.println(fac);
    }
}
