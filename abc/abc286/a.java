// https://atcoder.jp/contests/abc286/submissions/44933356

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int p = stdIn.nextInt();
    int q = stdIn.nextInt();
    int r = stdIn.nextInt();
    int s = stdIn.nextInt();

    int[] a = new int[n + 1];
    for(int i = 1; i <= n; i++) {
      if(p <= i && i <= q) {
        a[i - p + r] = stdIn.nextInt();
      } else if(r <= i && i <= s) {
        a[i - r + p] = stdIn.nextInt();
      } else {
        a[i] = stdIn.nextInt();
      }
    }
    
    for(int i = 1; i <= n; i++) {
      System.out.print(a[i] + " ");
    }
  }
}
