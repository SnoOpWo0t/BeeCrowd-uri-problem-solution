import java.util.Scanner;
//AKHI
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
       double x,y,z;
        x = scanner.nextDouble();
        y = scanner.nextDouble();
        z = x/y;
        System.out.printf("%.3f km/l\n",z);


    }
}
