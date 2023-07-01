// https://atcoder.jp/contests/abc262/submissions/41452091

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int y = stdIn.nextInt();
    if(y % 4 == 2) {
      System.out.println(y);
    } else {
      System.out.println(y + (4 - (y - 2) % 4));
    }
  }
}
