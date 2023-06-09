import java.text.DecimalFormat;
import java.util.Scanner;
import java.io.IOException;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        double x, y, z=0;
        x = scanner.nextDouble();
        y = scanner.nextDouble();
        x = x*3.5;
        y = y*7.5;
        z = (x + y) / (3.5+7.5);
        System.out.printf("MEDIA = %.5f\n", z);
    }
}
