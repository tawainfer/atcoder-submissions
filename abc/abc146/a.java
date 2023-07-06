// https://atcoder.jp/contests/abc146/submissions/43291212

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String[] ptn = {"SAT", "FRI", "THU", "WED", "TUE", "MON", "SUN"};
    String s = stdIn.next();

    for(int i = 0; i < 7; i++) {
      if(s.equals(ptn[i])) {
        System.out.println(i + 1);
        break;
      }
    }
  }
}
