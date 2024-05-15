import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int m1 = stdIn.nextInt();
    stdIn.nextInt();
    int m2 = stdIn.nextInt();

    System.out.println(m1 + 1 == m2 ? 1 : 0);
  }
}