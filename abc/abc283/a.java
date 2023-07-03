// https://atcoder.jp/contests/abc283/submissions/43222026

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();

    int ans = 1;
    for(int i = 0; i < b; i++) {
      ans *= a;
    }

    System.out.println(ans);
  }
}
