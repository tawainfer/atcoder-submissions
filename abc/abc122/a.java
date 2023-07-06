// https://atcoder.jp/contests/abc122/submissions/43291412

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    char c = s.charAt(0);

    if(c == 'A') {
      System.out.print('T');
    } else if(c == 'T') {
      System.out.print('A');
    } else if(c == 'G') {
      System.out.print('C');
    } else {
      System.out.print('G');
    }
  }
}
