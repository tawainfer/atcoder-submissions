// https://atcoder.jp/contests/abc270/submissions/44993939

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int a = stdIn.nextInt();
    int b = stdIn.nextInt();

    int ans = 0;
    ans |= a;
    ans |= b;
    System.out.println(ans);
  }
}
