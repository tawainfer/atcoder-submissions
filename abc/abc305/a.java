// https://atcoder.jp/contests/abc305/submissions/43210869

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    if(n % 5 < 3) System.out.println(n - n % 5);
    else {
      while(n % 5 != 0) n++;
      System.out.println(n);
    };
  }
}
