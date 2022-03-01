import java.util.Scanner;

public class Q14 {
  public static void main(String[] args) {
    char[] vowels = { 'a', 'e', 'i', 'o', 'u' };
    int vowel = 0, consonants = 0;

    System.out.print("Enter a message: ");
    Scanner scanner = new Scanner(System.in);
    String input = scanner.nextLine();
    scanner.close();

    outer: for (int i = 0; i < input.length(); i++) {

      for (char c : vowels) {
        if (c == input.charAt(i)) {
          vowel++;
          continue outer;
        }
      }
      consonants++;
    }

    System.out.println("Vowels: " + vowel + ", Consonents: " + consonants);
  }
}
