import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    String t = stdIn.next();

    if(s.length() > t.length()) {
      System.out.println("No");
      System.exit(0);
    }

    for(int i = 0; i < s.length(); i++) {
      if(s.charAt(i) != t.charAt(i)) {
        System.out.println("No");
        System.exit(0);
      }
    }

    System.out.println("Yes");
  }
}