// https://atcoder.jp/contests/abc294/submissions/43760518

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int h = stdIn.nextInt();
    int w = stdIn.nextInt();

    int[][] a = new int[h][w];
    for(int i = 0; i < h; i++) for(int j = 0; j < w; j++) a[i][j] = stdIn.nextInt();

    for(int i = 0; i < h; i++) {
      for(int j = 0; j < w; j++) {
        if(a[i][j] > 0) {
          System.out.print((char)(a[i][j] + 64));
        } else {
          System.out.print('.');
        }
      }
      System.out.println();
    }
  }
}
