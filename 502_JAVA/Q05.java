// class name "Empolyee" is not usable in same package
abstract class Employee2 {
  int EmpolyeeId;
  String name;
  int salary;


  public Employee2(int empolyeeId, String name, int salary) {
    EmpolyeeId = empolyeeId;
    this.name = name;
    this.salary = salary;
  }


  @Override
  public String toString() {
    return EmpolyeeId + "\t\t" + name + "\t\t" + salary;
  }
}

class EmployeeInfo extends Employee2 {

  public EmployeeInfo(int EmpolyeeId, String name, int salary) {
    super(EmpolyeeId, name, salary);
  }

}

public class Q05 {
  public static void main(String[] args) {
    EmployeeInfo[] list = {
      new EmployeeInfo(1, "Ram", 20000),
      new EmployeeInfo(1, "Sam", 28000),
      new EmployeeInfo(1, "Jodu", 25000),
  };
  System.out.println("ID\t\tName\t\tSalary");
  for (EmployeeInfo employee : list) {
    System.out.println(employee);
  }
  }
}