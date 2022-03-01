public class Q07 {
  public static void main(String[] args) {
    int[] arr = { 52, 56, 89, 80, 25 };
    int sum = 0;

    System.out.print("Array: ");
    for (int i : arr) {
      System.out.print(i + ", ");
    }

    for (int i : arr) {
      sum += i;
    }

    System.out.println("Sum: " + sum);
  }
}
