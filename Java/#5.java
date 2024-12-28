import java.util.Scanner;

public class MultiplyExample {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Add X: ");
        int X = scanner.nextInt();

        System.out.print("Add Y: ");
        int Y = scanner.nextInt();

        int product = X * Y;
        System.out.println(X + " x " + Y + " = " + product);
    }
}
