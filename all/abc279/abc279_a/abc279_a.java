import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    int n = s.length();

    int ans = 0;
    for(int i = 0; i < n; i++) {
      ans += s.charAt(i) - 117;
    }

    System.out.println(ans);
  }
}