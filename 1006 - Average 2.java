import java.text.DecimalFormat;
import java.util.Scanner;
import java.io.IOException;
//byakhi

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        double x, y,i, z=0;
        x = scanner.nextDouble();
        y = scanner.nextDouble();
        i = scanner.nextDouble();
        x = x*2;
        y = y*3;
        i = i*5;
        z = (x + y+i) / (2+3+5);
        System.out.printf("MEDIA = %.1f\n", z);
    }
}
