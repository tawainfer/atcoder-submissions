// https://atcoder.jp/contests/abc237/submissions/43760656

import java.util.Scanner;

class Main {
  static long pow(long x, long y) {
    long res = 1;
    while(y-- > 0) res *= x;
    return res;
  }

  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    long n = stdIn.nextLong();
    if(-pow(2, 31) <= n && n < pow(2, 31)) {
      System.out.println("Yes");
    } else {
      System.out.println("No");
    }
  }
}
