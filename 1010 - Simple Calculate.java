import java.util.Scanner;
//by_akhi
public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
      //  String a = scanner.nextLine();
        double cp1 = scanner.nextDouble();
        double u1 = scanner.nextDouble();
        double price1 = scanner.nextDouble();
        double cp2 = scanner.nextDouble();
        double u2 = scanner.nextDouble();
        double price2 = scanner.nextDouble();
       double totalprice = (u1*price1) +(u2*price2);
        System.out.printf("VALOR A PAGAR: R$ %.2f\n", totalprice);
    }
}
