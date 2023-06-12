import java.util.Scanner;
//by_akhi
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double a = scanner.nextDouble();

        if (a >= 0.00 && a <= 100.0)
        {
            if (a >= 0.00 && a <= 25.00) {
                System.out.println("Intervalo [0,25]");
            } else if (a > 25.00 && a <= 50.00) {
                System.out.println("Intervalo (25,50]");
            } else if (a > 50.00 && a <= 75.00) {
                System.out.println("Intervalo (50,75]");
            } else if (a > 75.00 && a <= 100.00) {
                System.out.println("Intervalo (75,100]");
            }
        }
        else {
            System.out.println("Fora de intervalo");
        }
    }
}
