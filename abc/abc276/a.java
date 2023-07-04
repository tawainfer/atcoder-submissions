// https://atcoder.jp/contests/abc276/submissions/43238844

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner stdIn = new Scanner(System.in);

    String s = stdIn.next();
    int ans = -1;

    for(int i = 0; i < s.length(); i++) {
      if(s.charAt(i) == 'a') {
        ans = i + 1;
      }
    }

    System.out.println(ans);
  }
}
