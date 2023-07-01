// https://atcoder.jp/contests/abc147/submissions/41617872

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();
    int c = stdIn.nextInt();

    System.out.println(a + b + c <= 21 ? "win" : "bust");
  }
}
