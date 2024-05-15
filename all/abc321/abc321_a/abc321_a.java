import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    for(int i = 1; i < s.length(); i++) {
      if(s.charAt(i - 1) <= s.charAt(i)) {
        System.out.println("No");
        System.exit(0);
      }
    }

    System.out.println("Yes");
  }
}