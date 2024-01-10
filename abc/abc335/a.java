// https://atcoder.jp/contests/abc335/submissions/49174360

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    for(int i = 0; i < s.length() - 1;  i++) {
      System.out.print(s.charAt(i));
    }
    System.out.print(4);
  }
}
