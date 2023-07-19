// https://atcoder.jp/contests/abc099/submissions/43761019

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    int n = stdIn.nextInt();
    if(n < 1000) {
      System.out.println("ABC");
    } else {
      System.out.println("ABD");
    }
  }
}
