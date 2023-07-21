// https://atcoder.jp/contests/abc213/submissions/43793384

import java.util.Scanner;
import java.util.Arrays;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int[] a = new int[n];
    for(int i = 0; i < n; i++) a[i] = stdIn.nextInt();
    
    int maxIdx = 0;
    for(int i = 1; i < n; i++) {
      if(a[maxIdx] < a[i]) {
        maxIdx = i;
      }
    }

    int ignore = maxIdx;
    int max = 0;
    int idx = 0;

    for(int i = 0; i < n; i++) {
      if(max < a[i] && i != ignore) {
        max = a[i];
        idx = i;
      }
    }

    System.out.println(idx + 1);
  }
}
