import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    int n = s.length();

    for(int i = 0; i < n; i++) {
      if((i % 2 == 0 && s.charAt(i) <= 'Z') || (i % 2 != 0 && 'a' <= s.charAt(i))) {
        System.out.println("No");
        System.exit(0);
      }
    }

    System.out.println("Yes");
  }
}