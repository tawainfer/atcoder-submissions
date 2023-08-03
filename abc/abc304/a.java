// https://atcoder.jp/contests/abc304/submissions/44202659

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();

    String[] s = new String[n];
    int[] a = new int[n];
    for(int i = 0; i < n; i++) {
      s[i] = stdIn.next();
      a[i] = stdIn.nextInt();
    }

    int minIdx = 0;
    for(int i = 1; i < n; i++) {
      if(a[minIdx] > a[i]) {
        minIdx = i;
      }
    }

    for(int i = minIdx; i < minIdx + n; i++) {
      int j = (i % n);
      System.out.println(s[j]);
    }
  }
}
