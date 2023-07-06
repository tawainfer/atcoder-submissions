// https://atcoder.jp/contests/abc160/submissions/43290608

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);
    int x = stdIn.nextInt();

    int ans = 0;
    ans += x / 500 * 1000;
    x -= x / 500 * 500;
    ans += x / 5 * 5;
    System.out.println(ans);
  }
}
