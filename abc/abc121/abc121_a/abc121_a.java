import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int h = stdIn.nextInt();
    int w = stdIn.nextInt();

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();

    h -= a;
    w -= b;
    System.out.println(h * w);
  }
}