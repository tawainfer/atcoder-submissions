// https://atcoder.jp/contests/abc344/submissions/51110190

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    boolean b = true;
    for(int i = 0; i < s.length(); i++) {
      if(s.charAt(i) == '|') {
        b = !b;
        continue;
      }

      if(b) {
        System.out.print(s.charAt(i));
      }
    }
  }
}
