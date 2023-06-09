import java.text.DecimalFormat;
import java.util.Scanner;
import java.io.IOException;
//by_akhi
public class Main {

    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
       int x, y,i, z=0,b;
        x = scanner.nextInt();
        y = scanner.nextInt();
        i = scanner.nextInt();
        b =  scanner.nextInt();
        z = ((x*y)-(i*b));
        System.out.println("DIFERENCA = "+z);
      //  System.out.printf("MEDIA = %.1f\n", z);
    }
}
