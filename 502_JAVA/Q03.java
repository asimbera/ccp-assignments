class Employee {
  String name, address;
  int year, salary;

  public Employee(String name, int year, int salary, String address) {
    this.name = name;
    this.year = year;
    this.salary = salary;
    this.address = address;
  }

  @Override
  public String toString() {
    return name + "\t\t" + year + "\t\t" + salary + "\t\t" + address;
  }
}

public class Q03 {
  public static void main(String[] args) {
    Employee[] list = {
        new Employee("Ram", 2000, 20000, "Kolkata"),
        new Employee("Sam", 2010, 36000, "Srilanka"),
        new Employee("Brook", 2008, 50000, "USA"),
    };
    System.out.println("Name\t\tYear\t\tSalary\t\tAddress");
    for (Employee employee : list) {
      System.out.println(employee);
    }
  }
}