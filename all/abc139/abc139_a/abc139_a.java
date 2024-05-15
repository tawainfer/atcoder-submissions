import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    String t = stdIn.next();

    int ans = 0;
    for(int i = 0; i < 3; i++) {
      if(s.charAt(i) == t.charAt(i)) {
        ans++;
      }
    }

    System.out.println(ans);
  }
}