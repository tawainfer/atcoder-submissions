// https://atcoder.jp/contests/abc173/submissions/41616677

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();

    System.out.println((1000 - n % 1000) % 1000);
  }
}
