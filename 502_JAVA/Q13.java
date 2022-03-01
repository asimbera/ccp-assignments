import java.util.Scanner;

public class Q13 {
  public static void main(String[] args) {
    System.out.print("Enter a message: ");
    Scanner scanner = new Scanner(System.in);
    String demo = scanner.nextLine();
    scanner.close();
    
    System.out.println("Length = " + demo.length());
  }
}
