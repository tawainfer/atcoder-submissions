import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int k = stdIn.nextInt() - 1;
    int a = stdIn.nextInt() - 1;

    System.out.println((a + k) % n + 1);
  }
}