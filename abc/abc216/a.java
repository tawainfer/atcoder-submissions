// https://atcoder.jp/contests/abc216/submissions/43246670

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    int n = s.length();

    for(int i = 0; i < n; i++) {
      if(s.charAt(i) == '.') break;
      System.out.print(s.charAt(i));
    }

    int y = s.charAt(n - 1) - 48;
    if(0 <= y && y <= 2) System.out.print('-');
    if(7 <= y && y <= 9) System.out.print('+');
  }
}
