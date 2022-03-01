import java.util.Scanner;

class Student {
  String name, dept;
  int year, rollNo;

  public Student(String name, String dept, int year, int rollNo) {
    this.name = name;
    this.dept = dept;
    this.year = year;
    this.rollNo = rollNo;
  }

  @Override
  public String toString() {
    return "Name: " + name + "\n" +
        "Dept: " + dept + "\n" +
        "Year: " + year + "\n" +
        "Roll No: " + rollNo + "\n";
  }
}

public class Q04 {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    Student student = new Student(scanner.nextLine(), scanner.nextLine(), scanner.nextInt(), scanner.nextInt());
    scanner.close();

    System.out.println(student);
  }
}