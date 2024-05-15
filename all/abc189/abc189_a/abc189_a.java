import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    if(s.charAt(0) == s.charAt(1) && s.charAt(1) == s.charAt(2)) {
      System.out.println("Won");
    } else {
      System.out.println("Lost");
    }
  }
}