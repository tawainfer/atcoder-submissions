import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();

    System.out.println(a * b % 2 == 0 ? "Even" : "Odd");
  }
}