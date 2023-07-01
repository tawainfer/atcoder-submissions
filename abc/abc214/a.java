// https://atcoder.jp/contests/abc214/submissions/41240852

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    if(n <= 125) System.out.print(4);
    else if(n <= 211) System.out.print(6);
    else System.out.print(8);
  }
}
