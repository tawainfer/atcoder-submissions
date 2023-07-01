// https://atcoder.jp/contests/abc182/submissions/41453750

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();

    if(2 * a + 100 <= b) {
      System.out.println(0);
    } else {
      System.out.println(2 * a + 100 - b);
    }
  }
}
