import java.util.Scanner;

public class Q11 {
  public static void main(String[] args) {
    System.out.print("Enter a string => ");
    Scanner scanner = new Scanner(System.in);
    String demo = scanner.nextLine();
    scanner.close();

    System.out.println("Input => " + demo);
    System.out.println("Length = " + demo.length());
  }
}
