// https://atcoder.jp/contests/abc314/submissions/44932885

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    String s = "1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

    System.out.print("3.");
    for(int i = 0; i < n; i++) {
      System.out.print(s.charAt(i));
    }
  }
}
