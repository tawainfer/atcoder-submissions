// https://atcoder.jp/contests/abc080/submissions/43290787

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    int a = stdIn.nextInt();
    int b = stdIn.nextInt();

    if(a * n < b) {
      System.out.println(a * n);
    } else {
      System.out.println(b);
    }
  }
}
