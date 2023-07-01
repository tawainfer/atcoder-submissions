// https://atcoder.jp/contests/abc204/submissions/41451719

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();

    if(a == b) {
      System.out.println(a);
    } else {
      System.out.println(3 - a - b);
    }
  }
}
