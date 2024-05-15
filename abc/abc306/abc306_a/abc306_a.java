import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    String s = stdIn.next();

    for(int i = 0; i < n; i++) {
      System.out.printf("%c%c", s.charAt(i), s.charAt(i));
    }
  }
}