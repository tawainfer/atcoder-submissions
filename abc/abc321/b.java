// https://atcoder.jp/contests/abc321/submissions/45898429

import java.util.Scanner;
import java.util.Arrays;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int x = stdIn.nextInt();

    int[] a = new int[n - 1];
    for(int i = 0; i < n - 1; i++) {
      a[i] = stdIn.nextInt();
    }

    for(int i = 0; i <= 100; i++) {
      int[] b = new int[n];
      for(int j = 0; j < n - 1; j++) {
        b[j] = a[j];
      }
      b[n - 1] = i;
      Arrays.sort(b);

      int sum = 0;
      for(int j = 1; j < n - 1; j++) {
        sum += b[j];
      }

      if(sum >= x) {
        System.out.println(i);
        System.exit(0);
      }
    }

    System.out.println(-1);
  }
}
