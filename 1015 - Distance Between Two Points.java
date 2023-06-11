import java.util.Scanner;
//by_akhi
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double x1, y1, x2, y2, z;
        x1 = scanner.nextDouble();
        y1 = scanner.nextDouble();
        x2 = scanner.nextDouble();
        y2 = scanner.nextDouble();
        z = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
        double k = Math.sqrt(z);
        System.out.printf("%.4f\n", k);
    }
}
