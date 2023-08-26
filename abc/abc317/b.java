// https://atcoder.jp/contests/abc317/submissions/44974095

import java.util.Scanner;
import java.util.Arrays;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int[] a = new int[n];
    for(int i = 0; i < n; i++) {
      a[i] = stdIn.nextInt();
    }
    Arrays.sort(a);

    for(int i = 1; i < n; i++) {
      if(a[i - 1] != a[i] - 1) {
        System.out.print(a[i] - 1);
        break;
      }
    }
  }
}
