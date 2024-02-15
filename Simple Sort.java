public class Simple Sort {
    import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();

        if (a < b && a < c) {
            if (b < c)
                System.out.printf("%d%n%d%n%d%n", a, b, c);
            else
                System.out.printf("%d%n%d%n%d%n", a, c, b);
        } else if (b < a && b < c) {
            if (a < c)
                System.out.printf("%d%n%d%n%d%n", b, a, c);
            else
                System.out.printf("%d%n%d%n%d%n", b, c, a);
        } else if (c < a && c < b) {
            if (b < a)
                System.out.printf("%d%n%d%n%d%n", c, b, a);
            else
                System.out.printf("%d%n%d%n%d%n", c, a, b);
        }

        System.out.printf("%n%d%n%d%n%d%n", a, b, c);
    }
}

    
}
