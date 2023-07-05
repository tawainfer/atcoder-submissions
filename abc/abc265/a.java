// https://atcoder.jp/contests/abc265/submissions/43259977

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int x = stdIn.nextInt();
    int y = stdIn.nextInt();
    int n = stdIn.nextInt();

    if(3 * x > y) {
      System.out.println(n / 3 * y + n % 3 * x);
    } else {
      System.out.println(x * n);
    }
  }
}
