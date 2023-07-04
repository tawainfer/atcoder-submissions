// https://atcoder.jp/contests/abc143/submissions/43246168

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();

    if(a <= b * 2) System.out.println(0);
    else System.out.println(a - b * 2);
  }
}
