import java.util.Scanner;

class Average {
  float calculate(int a, int b, int c) {
    return (a + b + c) / 3;
  }
}

public class Q01 {
  public static void main(String[] args) {
    System.out.print("Enter three numbers => ");
    Scanner scanner = new Scanner(System.in);
    int a = scanner.nextInt();
    int b = scanner.nextInt();
    int c = scanner.nextInt();
    scanner.close();
    float average = new Average().calculate(a, b, c);
    System.out.println("Avarage: " + average);
  }
}