// https://atcoder.jp/contests/abc158/submissions/43246448

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    if(s.equals("AAA") || s.equals("BBB")) System.out.println("No");
    else System.out.println("Yes");
  }
}
