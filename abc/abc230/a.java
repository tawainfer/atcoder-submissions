// https://atcoder.jp/contests/abc230/submissions/41241578

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    if(n < 10) System.out.println("AGC00" + n);
    else if(n < 42) System.out.println("AGC0" + n);
    else if(n < 100) System.out.println("AGC0" + (n + 1));
    else System.out.println("AGC" + (n + 1));
  }
}
