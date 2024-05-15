import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();
    a -= b;
    int c = stdIn.nextInt();
    c -= a;

    System.out.println(c < 0 ? 0 : c);
  }
}