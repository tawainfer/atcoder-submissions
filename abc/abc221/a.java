// https://atcoder.jp/contests/abc221/submissions/41532663

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();
    int c = a - b;

    int ans = 1;
    while(c > 0) {
      ans *= 32;
      c--;
    }

    System.out.println(ans);
  }
}
