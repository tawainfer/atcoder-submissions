// https://atcoder.jp/contests/abc272/submissions/43222050

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int ans = 0;

    for(int i = 0; i < n; i++) {
      int a = stdIn.nextInt();
      ans += a;
    }

    System.out.println(ans);
  }
}
