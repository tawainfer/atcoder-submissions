import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    String t = stdIn.next();
    char x = s.charAt(0);
    char y = t.charAt(0);

    System.out.println(x == 'Y' ? (char)(y - 32) : y);
  }
}