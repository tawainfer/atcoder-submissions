// https://atcoder.jp/contests/abc263/submissions/43810483

import java.util.Scanner;
import java.util.Arrays;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int[] a = new int[5];
    for(int i = 0; i < 5; i++) a[i] = stdIn.nextInt();
    Arrays.sort(a);

    int idx = -1;
    for(int i = 1; i < 5; i++) {
      if(a[i - 1] != a[i]) {
        if(idx != -1) {
          System.out.println("No");
          System.exit(0);
        }

        idx = i;
      }
    }

    if(idx == 2 || idx == 3) {
      System.out.println("Yes");
    } else {
      System.out.println("No");
    }
  }
}
