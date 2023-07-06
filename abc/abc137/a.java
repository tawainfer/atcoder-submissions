// https://atcoder.jp/contests/abc137/submissions/43290669

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();

    int[] v = {a + b, a - b, a * b};
    int ans = v[0];
    for(int i = 1; i < 3; i++) {
      if(ans < v[i]) {
        ans = v[i];
      }
    }

    System.out.println(ans);
  }
}
