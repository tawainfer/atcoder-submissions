// https://atcoder.jp/contests/abc349/submissions/52372853

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int s = 0;

    for(int i = 0; i < n - 1; i++) {
      int a = stdIn.nextInt();
      s += a;
    }

    System.out.print(-s);
  }
}
