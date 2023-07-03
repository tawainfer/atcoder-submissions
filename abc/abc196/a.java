// https://atcoder.jp/contests/abc196/submissions/43222452

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();
    int c = stdIn.nextInt();
    int d = stdIn.nextInt();

    int ans = -10009;
    for(int x = a; x <= b; x++) {
      for(int y = c; y <= d; y++) {
        if(ans < x - y) {
          ans = x - y;
        }
      }
    }

    System.out.println(ans);
  }
}
