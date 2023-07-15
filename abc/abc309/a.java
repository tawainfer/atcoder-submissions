// https://atcoder.jp/contests/abc309/submissions/43580263

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();

    if(a + 1 == b && a % 3 != 0) {
      System.out.println("Yes");
    } else {
      System.out.println("No");
    }
  }
}
