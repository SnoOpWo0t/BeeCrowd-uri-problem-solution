import java.util.Scanner;
//AKHI
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner (System.in);
       double a,b,c,tri,cir,trap,qua,retn ;
        double pi = 3.14159;
        a = scanner.nextDouble();
        b = scanner.nextDouble();
        c = scanner.nextDouble();
        tri = .5*a*c ;
        cir = pi*c*c;
        trap = ((a+b)/2) *c;
        qua = b*b;
        retn = a*b;

        System.out.printf("TRIANGULO: %.3f\n",tri);
        System.out.printf("CIRCULO: %.3f\n",cir);
        System.out.printf("TRAPEZIO: %.3f\n",trap);
        System.out.printf("QUADRADO: %.3f\n",qua);
        System.out.printf("RETANGULO: %.3f\n",retn);
    }
}
