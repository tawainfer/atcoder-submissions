import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int h = stdIn.nextInt();
    int w = stdIn.nextInt();
    int n = stdIn.nextInt();

    if(h < w) {
      h = w;
    }

    System.out.println((n + h - 1) / h);
  }
}