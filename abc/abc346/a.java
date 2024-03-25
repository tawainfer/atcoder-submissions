// https://atcoder.jp/contests/abc346/submissions/51670608

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int[] a = new int[n];
    for(int i = 0; i < n; i++) {
      a[i] = stdIn.nextInt();
    }

    for(int i = 1; i < n; i++) {
      System.out.printf("%d ", a[i - 1] * a[i]);
    }
  }
}
