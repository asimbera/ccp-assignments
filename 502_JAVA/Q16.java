import java.util.HashMap;
import java.util.Scanner;

public class Q16 {
  public static void main(String[] args) {
    System.out.print("Enter a message: ");
    Scanner scanner = new Scanner(System.in);
    String input = scanner.nextLine();
    scanner.close();

    HashMap<Character, Integer> dups = new HashMap<Character, Integer>();
    for (int i = 0; i < input.length(); i++) {
      char key = input.charAt(i);
      if (dups.containsKey(key)) {
        dups.put(key, dups.get(key) + 1);
      } else {
        dups.put(key, 1);
      }
    }

    System.out.print("Duplicate Charaters: ");
    dups.forEach((k, v) -> {
      if (v > 1) {
        System.out.print(k + " ");
      }
    });
    System.out.println();
  }
}
