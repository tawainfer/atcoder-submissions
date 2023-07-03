// https://atcoder.jp/contests/abc204/submissions/43222410

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int[] a = new int[n];
    for(int i = 0; i < n; i++) a[i] = stdIn.nextInt();

    int ans = 0;
    for(int x : a) {
      if(x > 10) {
        ans += x - 10;
      }
    }

    System.out.println(ans);
  }
}
