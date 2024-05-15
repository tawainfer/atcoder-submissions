import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    if(s.length() == 3) {
      System.out.println(s + s);
    } else if(s.length() == 2) {
      System.out.println(s + s + s);
    } else {
      System.out.println(s + s + s + s + s + s);
    }
  }
}