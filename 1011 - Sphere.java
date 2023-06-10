import java.util.Scanner;
//AKHI
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner (System.in);
       long r ;
        double pi = 3.14159;
        r = scanner.nextInt();
        double radius = (double) ((4.0/3)*pi*(r*r*r));
        System.out.printf("VOLUME = %.3f\n",radius);
    }
}
