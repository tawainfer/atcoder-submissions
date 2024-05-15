import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    System.out.print(s);
    System.out.println(s.charAt(s.length() - 1) == 's' ? "es" : "s");
  }
}