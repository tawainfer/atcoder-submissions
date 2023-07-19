// https://atcoder.jp/contests/abc305/submissions/43749103

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int p = (int)(stdIn.next().charAt(0) - 65);
    int q = (int)(stdIn.next().charAt(0) - 65);

    int[] a = {0, 3, 1, 4, 1, 5, 9};
    int[] b = new int[7];
    for(int i = 0; i < 7; i++) {
      if(i == 0) {
        b[i] = 0;
      } else {
        b[i] = b[i - 1] + a[i];
      }
    }

    if(p > q) {
      int t = p;
      p = q;
      q = t;
    }

    System.out.println(b[q] - b[p]);
  }
}
