import java.text.DecimalFormat;
import java.util.Scanner;
import java.io.IOException;

public class Main {

    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        double y,z,tsalary;
        int x;
        x = scanner.nextInt();
        y = scanner.nextDouble();
        z = scanner.nextDouble();
        tsalary = y*z;
        System.out.println("NUMBER = " + x);
        DecimalFormat df = new DecimalFormat(".00");
        System.out.println("SALARY = U$ "+ df.format(tsalary));

    }
}
//by_akhi
