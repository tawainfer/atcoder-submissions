// https://atcoder.jp/contests/abc310/submissions/43678946

import java.util.Scanner;

class Main {
  static int min(int a, int b) {
    return (a < b ? a : b);
  }

  static int minArray(int[] a) {
    int res = a[0];
    for(int i = 1; i < a.length; i++) {
      if(res > a[i]) {
        res = a[i];
      }
    }

    return res;
  }

  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int p = stdIn.nextInt();
    int q = stdIn.nextInt();

    int[] d = new int[n];
    for(int i = 0; i < n; i++) {
      d[i] = stdIn.nextInt();
    }

    System.out.println(min(p, q + minArray(d)));
  }
}
