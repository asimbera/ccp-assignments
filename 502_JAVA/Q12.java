import java.util.Scanner;

public class Q12 {
  public static void main(String[] args) {
    System.out.print("Enter a string => ");
    Scanner scanner = new Scanner(System.in);
    String str = scanner.nextLine();
    scanner.close();

    for (int i = 0; i < str.length() / 2; i++) {
      if (str.charAt(i) != str.charAt(str.length() - 1 - i)) {
        System.out.println(str + " is not a palindrome.");
        return;
      }
    }
    System.out.println(str + " is a palindrome.");
  }
}
