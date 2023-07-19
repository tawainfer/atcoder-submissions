// https://atcoder.jp/contests/abc229/submissions/43760352

import java.util.Scanner;

class Main {
  static int countGrid(String s) {
    int cnt = 0;
    for(int i = 0; i < s.length(); i++) {
      if(s.charAt(i) == '#') {
        cnt++;
      }
    }

    return cnt;
  }

  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    String t = stdIn.next();

    int cnt = countGrid(s) + countGrid(t);
    if(cnt >= 3) {
      System.out.println("Yes");
      System.exit(0);
    }

    if(cnt < 2) {
      System.out.println("No");
      System.exit(0);
    }

    if(s.charAt(0) == s.charAt(1) || t.charAt(0) == s.charAt(0)) {
      System.out.println("Yes");
    } else {
      System.out.println("No");
    }
  }
}
