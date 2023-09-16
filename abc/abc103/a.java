// https://atcoder.jp/contests/abc103/submissions/45575051

import java.util.Scanner;
import java.util.Arrays;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int[] a = new int[3];
    for(int i = 0; i < 3; i++) {
      a[i] = stdIn.nextInt();
    }
    Arrays.sort(a);

    System.out.println((a[2] - a[1]) + (a[1] - a[0]));
  }
}
