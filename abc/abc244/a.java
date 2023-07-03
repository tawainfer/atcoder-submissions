// https://atcoder.jp/contests/abc244/submissions/43221377

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    String s = stdIn.next();
    System.out.print(s.charAt(n - 1));
  }
}
