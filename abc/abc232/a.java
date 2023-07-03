// https://atcoder.jp/contests/abc232/submissions/43222338

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    System.out.println((s.charAt(0) - 48) * (s.charAt(2) - 48));
  }
}
