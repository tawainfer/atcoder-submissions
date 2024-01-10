// https://atcoder.jp/contests/abc335/submissions/49174417

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    for(int i = 0; i <= n; i++) {
      for(int j = 0; j <= n; j++) {
        for(int k = 0; k <= n; k++) {
          if(i + j + k <= n) {
            System.out.printf("%d %d %d\n", i, j, k);
          }
        }
      }
    }
  }
}
