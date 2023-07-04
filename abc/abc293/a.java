// https://atcoder.jp/contests/abc293/submissions/43238706

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    for(int i = 0; i < s.length(); i += 2) {
      System.out.printf("%c%c", s.charAt(i + 1), s.charAt(i));
    }
  }
}
