import java.util.Scanner;
import java.util.Vector;

public class Q19 {
  static Scanner scanner = new Scanner(System.in);
  static Vector<String> list = new Vector<String>();

  static boolean ShowMenu() {
    System.out.print(
        "\nShopping List\n"
            + "1. Delete an item\n"
            + "2. Add an item\n"
            + "3. Add an item at specific location\n"
            + "4. Show shopping list\n"
            + "5. Exit\n" + "Enter an option to continue: ");
    int opt = scanner.nextInt();
    switch (opt) {
      case 1:
        DeleteItem();
        break;
      case 2:
        AddItem(false);
        break;
      case 3:
        AddItem(true);
        break;
      case 4:
        ShowList();
        break;
      case 5:
        return false;

      default:
        System.out.println("Invalid option.");
    }
    return true;
  }

  static void DeleteItem() {
    System.out.print("Enter index of the item to delete: ");
    try {
      int index = scanner.nextInt();
      if (index < 0)
        return;
      list.removeElementAt(index);
      System.out.println("Item deleted.");
    } catch (Exception e) {
      System.out.println("Failed delete the item.");
      DeleteItem();
    }
  }

  static void AddItem(Boolean atIndex) {
    if (atIndex) {
      System.out.print("Enter index to add element to: ");
      int index = scanner.nextInt();
      if (index < 0)
        return;
      System.out.print("Enter element to add: ");
      scanner.nextLine();
      String item = scanner.nextLine();
      try {
        list.add(index, item);
        System.out.println("Item added.");
      } catch (Exception e) {
        System.out.println("Failed to add item.");
        AddItem(atIndex);
      }
    } else {
      System.out.print("Enter element to add: ");
      scanner.nextLine();
      String item = scanner.nextLine();
      try {
        list.add(item);
        System.out.println("Item added.");
      } catch (Exception e) {
        System.out.println("Failed to add item.");
        AddItem(atIndex);
      }
    }
  }

  static void ShowList() {
    if (list.size() == 0) {
      System.out.println("No item is in the list.");
    } else {
      for (int i = 0; i < list.size(); i++) {
        System.out.println(i + ". " + list.elementAt(i));
      }
    }
  }

  public static void main(String[] args) {
    for (String string : args) {
      list.addElement(string);
    }
    while (true) {
      if (!ShowMenu())
        break;
    }
    scanner.close();
  }
}
