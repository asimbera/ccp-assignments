import java.util.Scanner;

public class Q15 {
  public static void main(String[] args) {
    System.out.print("Enter a message: ");
    Scanner scanner = new Scanner(System.in);
    String input = scanner.nextLine();
    scanner.close();

    StringBuffer output = new StringBuffer();

    for (int i = 0; i < input.length(); i++) {
      if (input.charAt(i) != ' ') {
        output.append(input.charAt(i));
      }
    }

    System.out.println("Output: " + output);
  }
}
