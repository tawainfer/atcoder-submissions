// https://atcoder.jp/contests/abc092/submissions/43290725

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();
    int c = stdIn.nextInt();
    int d = stdIn.nextInt();

    if(a > b) {
      a = b;
    }

    if(c > d) {
      c = d;
    }

    System.out.println(a + c);
  }
}
