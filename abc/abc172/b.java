// https://atcoder.jp/contests/abc172/submissions/43710819

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    String t = stdIn.next();

    int ans = 0;
    for(int i = 0; i < s.length(); i++) {
      if(s.charAt(i) != t.charAt(i)) {
        ans++;
      }
    }

    System.out.println(ans);
  }
}
