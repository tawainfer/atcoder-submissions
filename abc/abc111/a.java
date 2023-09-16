// https://atcoder.jp/contests/abc111/submissions/45574884

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    for(int i = 0; i < s.length(); i++) {
      if(s.charAt(i) == '1') {
        System.out.print(9);
      } else if(s.charAt(i) == '9') {
        System.out.print(1);
      } else {
        System.out.print(s.charAt(i));
      }
    }
  }
}
