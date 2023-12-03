// https://atcoder.jp/contests/abc331/submissions/48169181

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int M = stdIn.nextInt();
    int D = stdIn.nextInt();

    int y = stdIn.nextInt();
    int m = stdIn.nextInt();
    int d = stdIn.nextInt();

    if(m == M && d == D) {
      System.out.printf("%d %d %d", y + 1, 1, 1);
    } else if(d == D) {
      System.out.printf("%d %d %d", y, m + 1, 1);
    } else {
      System.out.printf("%d %d %d", y, m, d + 1);
    }
  }
}

