import java.util.Scanner;

public class ReadDouble {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double n = sc.nextDouble();
        System.out.printf("'%7.3f'\n", n);
    }
}
