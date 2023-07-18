// https://atcoder.jp/contests/abc171/submissions/43735283

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);
    final int INF = 1000000009;

    int n = stdIn.nextInt();
    int k = stdIn.nextInt();

    int[] p = new int[n];
    for(int i = 0; i < n; i++) p[i] = stdIn.nextInt();

    int ans = 0;
    while(k-- > 0) {
      int minIdx = 0;
      for(int i = 1; i < p.length; i++) {
        if(p[minIdx] > p[i]) {
          minIdx = i;
        }
      }

      ans += p[minIdx];
      p[minIdx] = INF;
    }

    System.out.println(ans);
  }
}
