public class Q08 {
  public static void main(String[] args) {
    int[] arr = {1, 2, 3, 4, 5, 6, 85, 23};
    int[] rev = new int[arr.length];

    for (int i = 0; i < arr.length; i++) {
      rev[arr.length - i - 1] = arr[i];
    }

    System.out.print("Original => ");
    for (int i : arr) {
      System.out.print(i + " ");
    }
    System.out.print("\nReversed => ");
    for (int i : rev) {
      System.out.print(i + " ");
    }
    System.out.print("\n");

  }
}
