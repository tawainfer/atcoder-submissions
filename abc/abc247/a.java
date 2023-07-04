// https://atcoder.jp/contests/abc247/submissions/43257347

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    int n = 4;

    System.out.print(0);
    for(int i = 0; i < n - 1; i++) System.out.print(s.charAt(i));
  }
}
