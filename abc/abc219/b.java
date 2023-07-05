// https://atcoder.jp/contests/abc219/submissions/43260095

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    String[] s = new String[3];
    for(int i = 0; i < 3; i++) s[i] = stdIn.next();
    String t = stdIn.next();
    int n = t.length();

    for(int i = 0; i < n; i++) {
      int idx = t.charAt(i) - 49;
      System.out.print(s[idx]);
    }
  }
}
