// https://atcoder.jp/contests/abc104/submissions/43749868

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int r = stdIn.nextInt();
    if(r < 1200) {
      System.out.println("ABC");
    } else if(r < 2800) {
      System.out.println("ARC");
    } else {
      System.out.println("AGC");
    }
  }
}
