// https://atcoder.jp/contests/abc188/submissions/41452265

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int x = stdIn.nextInt();
    int y = stdIn.nextInt();

    if(x > y) {
      int t = x;
      x = y;
      y = t;
    }

    if((x + 3) > y) {
      System.out.println("Yes");
    } else {
      System.out.println("No");
    }
  }
}
