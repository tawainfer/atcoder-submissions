// https://atcoder.jp/contests/abc274/submissions/43749155

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();

    double ans = b / (double)a;
    System.out.printf("%.3f", ans);
  }
}
