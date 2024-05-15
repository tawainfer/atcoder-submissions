import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int h1 = stdIn.nextInt();
    int m1 = stdIn.nextInt();
    int h2 = stdIn.nextInt();
    int m2 = stdIn.nextInt();
    int k = stdIn.nextInt();

    m1 += h1 * 60;
    m2 += h2 * 60;
    System.out.println(m2 - m1 - k);
  }
}