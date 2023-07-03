// https://atcoder.jp/contests/abc224/submissions/43221621

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    int n = s.length();

    System.out.println(s.charAt(n - 2) == 'e' && s.charAt(n - 1) == 'r' ? "er" : "ist");
  }
}
