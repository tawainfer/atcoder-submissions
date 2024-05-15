import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int a = stdIn.nextInt();
    int b = stdIn.nextInt();

    System.out.println(n * a < b ? n * a : b);
  }
}