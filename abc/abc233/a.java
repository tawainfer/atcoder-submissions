// https://atcoder.jp/contests/abc233/submissions/41454085

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int x = stdIn.nextInt();
    int y = stdIn.nextInt();

    if(x >= y) {
      System.out.println(0);
    } else {
      System.out.println((y - x + 10 - 1) / 10);
    }
  }
}
