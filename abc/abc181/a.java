// https://atcoder.jp/contests/abc181/submissions/41453788

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();

    if(n % 2 == 0) {
      System.out.println("White");
    } else {
      System.out.println("Black");
    }
  }
}
