import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    System.out.print(s.charAt(1));
    System.out.print(s.charAt(2));
  }
}