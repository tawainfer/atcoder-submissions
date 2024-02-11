// https://atcoder.jp/contests/abc340/submissions/50216140

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();
    int d = stdIn.nextInt();

    for(int i = a; i <= b; i += d) {
      System.out.printf("%d ", i);
    }
  }
}
