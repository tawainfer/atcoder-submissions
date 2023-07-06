// https://atcoder.jp/contests/abc210/submissions/43290488

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int a = stdIn.nextInt();
    int x = stdIn.nextInt();
    int y = stdIn.nextInt();

    int ans = 0;
    for(int i = 1; i <= n; i++) {
      if(i <= a) {
        ans += x;
      } else {
        ans += y;
      }
    }

    System.out.print(ans);
  }
}
