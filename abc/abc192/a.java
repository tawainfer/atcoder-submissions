// https://atcoder.jp/contests/abc192/submissions/41451735

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int x = stdIn.nextInt();
    System.out.println(100 - (x % 100));
  }
}
