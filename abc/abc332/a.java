// https://atcoder.jp/contests/abc332/submissions/48443795

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int s = stdIn.nextInt();
    int k = stdIn.nextInt();

    int ans = 0;
    for(int i = 0; i < n; i++) {
      int p = stdIn.nextInt();
      int q = stdIn.nextInt();
      ans += p * q;
    }

    if(ans < s) {
      ans += k;
    }

    System.out.print(ans);
  }
}
