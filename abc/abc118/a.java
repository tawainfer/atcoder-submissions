// https://atcoder.jp/contests/abc118/submissions/43246780

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();

    if(b % a == 0) System.out.println(a + b);
    else System.out.println(b - a);
  }
}
