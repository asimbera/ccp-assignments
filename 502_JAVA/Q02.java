import java.util.Scanner;

class Complex {
  float real, imaginary;

  public Complex(float real, float imaginary) {
    this.real = real;
    this.imaginary = imaginary;
  }

  Complex add(Complex operand) {
    return new Complex(real + operand.real, imaginary + operand.imaginary);
  }

  Complex subtract(Complex operand) {
    return new Complex(real - operand.real, imaginary - operand.imaginary);
  }

  Complex multiply(Complex operand) {
    return new Complex((real * operand.real) - (imaginary * operand.imaginary),
        (imaginary * operand.real) + (real * operand.imaginary));
  }

  @Override
  public String toString() {
    return real + " + " + imaginary + "i";
  }
}

public class Q02 {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter first complex no => ");
    Complex a = new Complex(scanner.nextFloat(), scanner.nextFloat());
    System.out.print("Enter second complex no => ");
    Complex b = new Complex(scanner.nextFloat(), scanner.nextFloat());
    scanner.close();

    System.out.println("Sum: " + a.add(b));
    System.out.println("Difference: " + a.subtract(b));
    System.out.println("Product: " + a.multiply(b));
  }
}