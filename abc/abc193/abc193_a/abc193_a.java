import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    double a = stdIn.nextDouble();
    double b = stdIn.nextDouble();

    System.out.println((1 - b / a) * 100);
  }
}