// https://atcoder.jp/contests/abc233/submissions/43749361

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int l = stdIn.nextInt();
    int r = stdIn.nextInt();
    String s = stdIn.next();
    int n = s.length();

    String t = "";
    for(int i = 0; i < n; i++) {
      if(l - l <= i && i <= r - 1) {
        t += s.charAt(i);
      }
    }

    for(int i = 0; i < n; i++) {
      if(l - 1 <= i && i <= r - 1) {
        System.out.print(t.charAt(t.length() - (i - (l - 1)) - 1));
      } else {
        System.out.print(s.charAt(i));
      }
    }
  }
}
