// https://atcoder.jp/contests/abc282/submissions/42820359

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);
    
    int n = stdIn.nextInt();
    for(int i = 0; i < n; i++) {
      System.out.print((char)(i + 65));
    }
  }
}
