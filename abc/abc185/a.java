// https://atcoder.jp/contests/abc185/submissions/43221954

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int[] a = new int[4];
    int ans = 100;

    for(int i = 0; i < 4; i++) {
      a[i] = stdIn.nextInt();
      if(ans > a[i]) {
        ans = a[i];
      }
    }

    System.out.println(ans);
  }
}
