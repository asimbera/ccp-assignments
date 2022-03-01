public class Q10 {
  public static void main(String[] args) {
    int[][] a = { { 1, 2, 3 }, { 8, 6, 5 }, { 10, 6, 9 } };
    int[][] b = { { 9, 8, 7 }, { 5, 6, 8 }, { 2, 8, 0 } };

    int[][] c = new int[3][3];

    for (int i = 0; i < c.length; i++) {
      for (int j = 0; j < c.length; j++) {
        c[i][j] = a[i][j] + b[i][j];
      }
    }

    System.out.println("Result: ");
    for (int i = 0; i < c.length; i++) {
      for (int j = 0; j < c.length; j++) {
        System.out.print(c[i][j]+ " ");
      }
      System.out.print("\n");
    }
  }
}
