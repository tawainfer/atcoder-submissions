// https://atcoder.jp/contests/abc153/submissions/41638938

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int h = stdIn.nextInt();
    int a = stdIn.nextInt();

    System.out.println((h + a - 1) / a);
  }
}
