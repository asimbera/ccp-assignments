class ThisExample {
  String prop;

  public ThisExample() {
    prop = "Ye Boi!";
  }

  public ThisExample setProp(String prop) {
    this.prop = prop;
    return this;
  }

  @Override
  public String toString() {
    return "ThisExample { prop=" + prop + " }";
  }
}

public class Q06 {
  public static void main(String[] args) {
    ThisExample example = new ThisExample();
    System.out.println(example);
    ThisExample example2 = example.setProp("Oh yeah!");
    System.out.println(example2);
  }
}