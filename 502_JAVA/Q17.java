import java.util.Scanner;

public class Q17 {
  public static void main(String[] args) {
    System.out.print("Enter 1st message: ");
    Scanner scanner = new Scanner(System.in);
    String a = scanner.nextLine();
    System.out.print("Enter 2nd message: ");
    String b = scanner.nextLine();
    scanner.close();

    System.out.println("1st input: " + a);
    System.out.println("2nd input: " + b);

    a = a.concat(b);
    b = a.substring(0, b.length());
    a = a.substring(b.length());

    System.out.println("After Swap:");
    System.out.println("1st input: " + a);
    System.out.println("2nd input: " + b);
  }
}
