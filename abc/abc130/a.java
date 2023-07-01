// https://atcoder.jp/contests/abc130/submissions/41617890

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int x = stdIn.nextInt();
    int a = stdIn.nextInt();

    System.out.println(x < a ? 0 : 10);
  }
}
