// https://atcoder.jp/contests/abc197/submissions/42992957

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    for(int i = 1; i <= 3; i++) {
      int idx = i % 3;
      System.out.print(s.charAt(idx));
    }
  }
}
