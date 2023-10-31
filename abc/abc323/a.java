// https://atcoder.jp/contests/abc323/submissions/47099132

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    for(int i = 1; i < s.length(); i += 2) {
      if(s.charAt(i) != '0') {
        System.out.println("No");
        System.exit(0);
      }
    }

    System.out.println("Yes");
  }
}
