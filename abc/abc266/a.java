// https://atcoder.jp/contests/abc266/submissions/43222307

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    int n = s.length();

    System.out.println(s.charAt(n / 2));
  }
}
