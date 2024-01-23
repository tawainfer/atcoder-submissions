// https://atcoder.jp/contests/abc337/submissions/49591583

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int t = 0;
    int a = 0;

    for(int i = 0; i < n; i++) {
      int x = stdIn.nextInt();
      int y = stdIn.nextInt();
      t += x;
      a += y;
    }

    if(t > a) {
      System.out.println("Takahashi");
    } else if(t < a) {
      System.out.println("Aoki");
    } else {
      System.out.println("Draw");
    }
  }
}
