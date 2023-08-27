// https://atcoder.jp/contests/abc271/submissions/44993804

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    String ptn = "ABCDEF";

    if(n / 16 < 10) {
      System.out.print(n / 16);
    } else {
      System.out.print(ptn.charAt(n / 16 % 10));
    }

    if(n % 16 < 10) {
      System.out.print(n % 16);
    } else {
      System.out.print(ptn.charAt(n % 16 % 10));
    }
  }
}
