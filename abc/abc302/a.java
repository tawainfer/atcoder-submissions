// https://atcoder.jp/contests/abc302/submissions/41574172

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    long a = stdIn.nextLong();
    long b = stdIn.nextLong();

    System.out.print((a + b - 1) / b);
  }
}
