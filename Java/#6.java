import java.util.Scanner;

public class ArithmeticOperations {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Add X: ");
        int x = scanner.nextInt();

        System.out.print("Add Y: ");
        int y = scanner.nextInt();

        int sum = x + y;
        int difference = x - y;
        int product = x * y;
        int quotient = x / y;
        int remainder = x % y;

        System.out.println(x + " + " + y + " = " + sum);
        System.out.println(x + " - " + y + " = " + difference);
        System.out.println(x + " x " + y + " = " + product);
        System.out.println(x + " / " + y + " = " + quotient);
        System.out.println(x + " mod " + y + " = " + remainder);
    }
}
