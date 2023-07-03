// https://atcoder.jp/contests/abc264/submissions/43222095

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int l = stdIn.nextInt() - 1;
    int r = stdIn.nextInt() - 1;

    String s = "atcoder";
    for(int i = 0; i < 7; i++) {
      if(l <= i && i <= r) {
        System.out.print(s.charAt(i));
      }
    }
  }
}
