public import java.util.Scanner;

public class Triangle {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double A = scanner.nextDouble();
        double B = scanner.nextDouble();
        double C = scanner.nextDouble();

        if (A + B > C && C + A > B && B + C > A) {
            System.out.println("Perimetro = " + (A + B + C));
        } else {
            double area = 0.5 * (A + B) * C;
            System.out.printf("Area = %.1f%n", area);
        }
    }
}
 
    

