import java.util.Vector;

public class Q18 {
  public static void main(String[] args) {
    if (args.length != 5) {
      System.out.println("There must be exactly 5 items.");
      return;
    }
    Vector<Object> cmdArgs = new Vector<Object>();
    for (String string : args) {
      cmdArgs.addElement(string);
    }
    System.out.println("Shopping List");
    for (Object object : cmdArgs) {
      System.out.println(object);
    }
  }
}
