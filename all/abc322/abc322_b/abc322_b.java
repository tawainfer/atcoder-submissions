import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int m = stdIn.nextInt();

    String s = stdIn.next();
    String t = stdIn.next();

    int ans = 3;

    if(s.length() <= t.length()) {
      boolean check = true;

      for(int i = 0; i < s.length(); i++) {
        if(s.charAt(i) != t.charAt(i)) {
          check = false;
          break;
        }
      }

      if(check) {
        ans -= 2;
      }
    }

    if(s.length() <= t.length()) {
      boolean check = true;

      for(int i = 0; i < s.length(); i++) {
        if(s.charAt(s.length() - 1 - i) != t.charAt(t.length() - 1 - i)) {
          check = false;
          break;
        }
      }

      if(check) {
        ans--;
      }
    }

    System.out.print(ans);
  }
}
