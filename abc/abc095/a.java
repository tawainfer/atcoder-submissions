// https://atcoder.jp/contests/abc095/submissions/43748777

import java.util.Scanner;

class Main {
  public static void main(String args[]) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    
    int ans = 700;
    for(int i = 0; i < 3; i++) {
      if(s.charAt(i) == 'o') {
        ans += 100;
      }
    }

    System.out.println(ans);
  }
}
