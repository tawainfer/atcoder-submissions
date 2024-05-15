import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    for(int i = 0; i < 3; i++) System.out.print(s.charAt(i));
  }
}