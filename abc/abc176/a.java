// https://atcoder.jp/contests/abc176/submissions/43246761

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int x = stdIn.nextInt();
    int t = stdIn.nextInt();

    System.out.println((n + x - 1) / x * t);
  }
}
