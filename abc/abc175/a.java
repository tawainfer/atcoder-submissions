// https://atcoder.jp/contests/abc175/submissions/43749502

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    if(s.equals("RRR")) {
      System.out.println(3);
    } else if(s.equals("RRS") || s.equals("SRR")) {
      System.out.println(2);
    } else if(s.equals("SSS")) {
      System.out.println(0);
    } else {
      System.out.println(1);
    }
  }
}
