// https://atcoder.jp/contests/abc273/submissions/41532970

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();

    int ans = 1;
    for(int i = 2; i <= n; i++) ans *= i;

    System.out.println(ans);
  }
}
