import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt() - 1;
    String s = stdIn.next();

    System.out.println(s.charAt(n) == 'o' ? "Yes" : "No");
  }
}