public class Q09 {
  static int[] result = new int[5];
  static void showResult(String op) {
    StringBuffer buffer = new StringBuffer();
    buffer.append(op);
    buffer.append("=> ");
    for (int i : result) {
      buffer.append(i);
      buffer.append(", ");
    }
    System.out.println(buffer);
  }
  public static void main(String[] args) {
    int[] b = {2, 9, 5, 8, 4};
    int[] a = {78, 56, 25, 72, 23};

    for (int i = 0; i < b.length; i++) {
      result[i] = a[i] + b[i];
    }
    showResult("Addition");
    for (int i = 0; i < b.length; i++) {
      result[i] = a[i] - b[i];
    }
    showResult("Substraction");
    for (int i = 0; i < b.length; i++) {
      result[i] = a[i] * b[i];
    }
    showResult("Multiplication");
    for (int i = 0; i < b.length; i++) {
      result[i] = a[i] / b[i];
    }
    showResult("Division");
  }
}
