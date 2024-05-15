import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int x = stdIn.nextInt();
    int a = stdIn.nextInt();
    int b = stdIn.nextInt();

    x -= a;
    while(x >= b) x -= b;
    System.out.println(x);
  }
}