// https://atcoder.jp/contests/abc212/submissions/41261341

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();

    if(0 < a && b == 0) System.out.print("Gold");
    else if(a == 0 && 0 < b) System.out.print("Silver");
    else System.out.print("Alloy");
  }
}
