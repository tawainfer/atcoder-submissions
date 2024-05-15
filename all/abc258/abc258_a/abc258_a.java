import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int k = stdIn.nextInt();
    int h = 21;
    int m = 0;

    h += k / 60;
    m += k % 60;

    System.out.printf("%02d:%02d", h, m);
  }
}