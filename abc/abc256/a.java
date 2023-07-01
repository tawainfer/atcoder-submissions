// https://atcoder.jp/contests/abc256/submissions/42820373

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);
    
    int n = stdIn.nextInt();
    int ans = 1;

    for(int i = 0; i < n; i++) {
      ans *= 2;
    }
    
    System.out.println(ans);
  }
}
