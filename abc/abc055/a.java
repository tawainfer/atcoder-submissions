// https://atcoder.jp/contests/abc055/submissions/43749943

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int x = 800 * n;
    int y = 200 * (n / 15);
    System.out.println(x - y);
  }
}
