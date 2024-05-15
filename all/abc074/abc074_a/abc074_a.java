import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int a = stdIn.nextInt();

    System.out.println(n * n - a);
  }
}